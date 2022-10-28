const cors = require('cors');
const express = require('express');
const crypto = require('crypto');

const HOST = '0.0.0.0';
const PORT = process.env.PORT;
const FLAG = process.env.FLAG;

const app = express();

app.use(cors());
app.use(express.json());

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/index.html');
});

app.get('/source.js', (req, res) => {
  res.sendFile(__filename);
});

app.post('/encrypt', (req, res) => {
  plaintext = escape(req.body.plaintext);
  plaintext = plaintext.replaceAll(/[tucafTCUFA]/g, '');
  
  if (plaintext.length < 5) {
    res.send({"error" : "Plaintext too simple"});
    return
  }

  const [p, q, N, x] = genKey(1024);
  cipher = goldwasserEncrypt(plaintext, N, x);

  res.send({
    "N" 	 : N.toString(),
    "x" 	 : x.toString(),
    "ciphertext" : cipher,
    "Debug"	 : "Source at /source.js"
  });

});

function jacobi(a, n) {
  if (!(n > 0n && n % 2n == 1)) {
    return -1
  }
  
  a = a % n;
  var t = 1n;
  var r;

  while (a != 0) {
    while (a % 2n == 0) {
      a = a >> 1n;
      r = n % 8n;
      if (r == 3n || r == 5n) {
	t = -t;
      }
    }
    r = n;
    n = a;
    a = r;
    if (a % 4n == 3n && n % 4n == 3n) {
      t = -t;
    }
    a = a % n;
  }
  if (n==1n) {
    return Number(t);
  }
  return 0;
}

function XOR(m1, m2) {
  const l1 = m1.length;
  const l2 = m2.length;

  var r = [];

  for (let i = 0; i < Math.max(l1, l2); i++) {
    r.push(m1.charCodeAt(i % l1) ^ m2.charCodeAt(i % l2));
  }

  return r
}

function genKey(n) {
  var p = 0n;
  var q = 0n;
 
  do {
    p = crypto.generatePrimeSync(n, {bigint: true});
  } while (p % 4n != 3n);
  
  do {
    q = crypto.generatePrimeSync(n, {bigint: true});
  } while (q % 4n != 3n);

  var N = p*q;

  do {
    x = BigInt(Math.random() * 2**52);
  } while (jacobi(x, N) != 1);

  return [p, q, N, x]
}

function goldwasserEncrypt(m, N, x) {
  var cipher = []

  var xor = XOR(m, FLAG);

  for (let b of xor) {
    var r = BigInt(Math.random() * 2**52);
    var n = BigInt(b);
    var a = (r**2n) * (x**n);
    cipher.push((a % N).toString(16));
  }

  return cipher
}

app.listen(PORT, HOST);
console.log(`Running on http://${HOST}:${PORT}`);
