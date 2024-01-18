function toggleINR() {
    document.getElementById("usd-inr-toggle").style.backgroundColor = "#fff";
    document.getElementById("usd-inr-toggle").style.color = "#222";
    document.getElementById("inr-usd-toggle").style.backgroundColor = "#57b846";
    document.getElementById("inr-usd-toggle").style.color = "#fff";
    document.getElementById("usd-inr-form").style.display = "none";
    document.getElementById("inr-usd-form").style.display = "block";
}

function toggleUSD() {
    document.getElementById("usd-inr-toggle").style.backgroundColor = "#57B846";
    document.getElementById("usd-inr-toggle").style.color = "#fff";
    document.getElementById("inr-usd-toggle").style.backgroundColor = "#fff";
    document.getElementById("inr-usd-toggle").style.color = "#222";
    document.getElementById("inr-usd-form").style.display = "none";
    document.getElementById("usd-inr-form").style.display = "block";
}
