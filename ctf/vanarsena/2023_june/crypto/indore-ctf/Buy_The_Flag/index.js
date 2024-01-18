const express = require("express");
const cookieParser = require("cookie-parser");
const routes = require("./routes/index");
const cors = require("cors");
const path = require("path");

const app = express();

//Static Files
app.use("/static", express.static(__dirname + "/public/static"));
app.use("/css", express.static(__dirname + "/public/static/css"));
app.use("/js", express.static(__dirname + "/public/static/"));
app.use("/img", express.static(__dirname + "/public/static/img"));

//Set Views
app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");
app.use(cookieParser());

// cors
app.use(cors());
app.use(express.json());
app.use(cookieParser());
app.disable("x-powered-by");

process.on("uncaughtException", function (err) {
    console.error(err);
});

const port = 3000;

app.use("", routes);

app.listen(port, () => {
    console.log("Server started at Port " + port);
});
