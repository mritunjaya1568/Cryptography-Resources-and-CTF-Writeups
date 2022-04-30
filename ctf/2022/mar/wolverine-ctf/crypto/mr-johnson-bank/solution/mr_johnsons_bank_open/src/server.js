const express = require('express');
const path = require("path");

const app = express();

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.urlencoded());

// I wonder if flag checks have a timing vulnerability

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'pages', 'index.html'));
});

app.post('/', async (req, res) => {
    if(typeof req.body.username === "undefined" || typeof req.body.password == "undefined"){
        res.redirect(`/?error=Incorrect Password`);
        return;
    }

    if (req.body.username !== "williamjohnson" && req.body.username !== "wjohnson") {
        res.redirect('/?error=Unable to Find User');
        return;
    }
    const correct = "passe9f6x";
    if (await checkPassword(req.body.password, correct)) {
        res.sendFile(path.join(__dirname, 'pages', 'account.html'));
        return;
    }
    res.status(403).redirect(`/?error=Incorrect Password&username=${req.body.username}`);
});

app.listen(3000, () => console.log('Started'));


function sleep(time) {
    return new Promise(resolve => {
        setTimeout(resolve, time)
    });
}

async function checkPassword(attempt, correct) {
    for (let i = 0; i < correct.length; i++) {
        if(i === attempt.length){
            return false;
        }
        if(attempt[i] !== correct[i]){
            return false;
        }
        await sleep(500); // we use 500 ms to make it a bit more noticeable. If we estimate worse case jitter of 200ms, this should be more than plenty to be detectable by a script.
    }
    return true;
}
