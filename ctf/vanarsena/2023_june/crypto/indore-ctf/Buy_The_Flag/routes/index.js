const express = require("express");
const router = new express.Router();
const bodyParser = require("body-parser");
const rateLimit = require("express-rate-limit");
const crypto = require("crypto");
const extend = require("node.extend");
const { parse } = require("path");

var urlencodedParser = bodyParser.urlencoded({
    extended: false,
});

const credentials = ['{"username":"manager", "password": "' + crypto.randomBytes(64).toString("hex") + '", "cookie": "' + crypto.randomBytes(64).toString("hex") + '", "manager":true}', '{"username":"accountant", "password":"accountant", "cookie": "' + crypto.randomBytes(64).toString("hex") + '"}'];

function verifyCredentials(username, password) {
    for (i = 0; i < credentials.length; i++) {
        credential = JSON.parse(credentials[i]);
        if (credential.username === username && credential.password === password) {
            return credential.cookie;
        }
    }
    return false;
}

function verifyCookie(receivedCookie) {
    for (i = 0; i < credentials.length; i++) {
        credential = JSON.parse(credentials[i]);
        if (credential.cookie == receivedCookie) {
            return true;
        }
    }
    return false;
}

function verifyLogin(req) {
    const token = req.cookies.token;
    if (!token) {
        return false;
    }
    return verifyCookie(token);
}

function verifyManager(receivedCookie) {
    for (i = 0; i < credentials.length; i++) {
        credential = JSON.parse(credentials[i]);
        if (credential.cookie === receivedCookie) {
            return [credential.manager, credential.id];
        }
    }
    return false;
}

function securityIncident(request, isLogedin) {
    var log = {};
    extend(true, log, request, { isLogedin: isLogedin, date: Date.now() });
    console.log("Security Incident Log! " + JSON.stringify(log));
}

router.get("/", (req, res) => {
    res.render("login");
});

const limiter = rateLimit({ windowMs: 5 * 60 * 1000, max: 10, message: "Too many requests!" });

router.post("/signin", limiter, urlencodedParser, async (req, res) => {
    const { username, password } = req.body;

    try {
        if (!(username && password)) {
            return res.status(400).json({ error: "Username and Password is required" });
        }

        var cookie = verifyCredentials(username, password);

        if (cookie != false) {
            res.cookie("token", cookie);
            res.redirect(302, "/profile/");
        } else {
            return res.status(400).json({ error: "Invalid username or password" });
        }
    } catch (error) {
        console.log(error);
        return res.status(400).json({ error: "User doesn't exist!" });
    }
});

router.get("/logout", async (req, res) => {
    res.clearCookie("token");
    res.redirect("/");
});

router.get("/profile/", async (req, res) => {
    var isLoggedin = verifyLogin(req);

    if (isLoggedin) {
        res.render("profile", {
            first_name: "Accountant",
            last_name: "Accountant",
            username: "accountant",
            USD: 10,
            INR: 160000,
        });
    } else {
        return res.status(403).json({ error: "Unauthorized Action" });
    }
});

router.get("/currency-exchange", async (req, res) => {
    var isLoggedin = verifyLogin(req);
    if (!isLoggedin) {
        return res.status(403).json({ error: "Unauthorized Action" });
    }

    res.render("exchange", {
        first_name: "Accountant",
        last_name: "Accountant",
        USD: 10,
        INR: 160000,
    });
});

router.post("/buy-flag", urlencodedParser, async (req, res) => {
    var isLoggedin = verifyLogin(req);

    if (isLoggedin) {
        const id = req.body.id;
        if (!id) {
            return res.status(400).json({ error: "Invalid ID" });
        }
        if (verifyManager(req.cookies.token)[0]) {
            if (verifyManager(req.cookies.token)[1] && id == verifyManager(req.cookies.token)[1]) {
                res.json({ flag: "BSidesIndore{fake_flag}" });
            } else {
                res.send("<script>alert('Invalid ID!')</script>");
            }
        } else {
            res.send("<script>alert('Only Manager can perform this action!')</script>");
        }
    } else {
        securityIncident(req.body, isLoggedin);
        return res.status(403).json({ error: "Unauthorized Action" });
    }
});
module.exports = router;
