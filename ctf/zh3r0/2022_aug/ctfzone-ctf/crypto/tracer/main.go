package main

import (
	"crypto/rsa"
	"crypto/x509"
	"encoding/base64"
	"encoding/hex"
	"encoding/pem"
	"errors"
	"fmt"
	"io/ioutil"
	"log"
	"math/big"
	"os"
	"runtime/trace"
)

func main() {
	tracefile, err := os.Create("trace.out")
	if err != nil {
		log.Fatal(err)
	}
	defer tracefile.Close()

	if err := trace.Start(tracefile); err != nil {
		log.Fatal(err)
	}
	defer trace.Stop()

	p := getEnvNum("P")
	log.Printf("p = %d", p)

	q := getEnvNum("Q")
	log.Printf("q = %d", q)

	n := new(big.Int)
	n.Mul(p, q) // n = p * q 
	log.Printf("n = %d", n)

	phi := getPhi(p, q) // phi = (p-1) * (q-1)
	log.Printf("phi = %d", phi)

	e := big.NewInt(65537) // e = 65537

	gcd, d := GCD(e, phi) // d = inverse(e,phi)

	if gcd.Int64() != 1 {
		log.Fatal(errors.New("gcd(e, phi) is not 1"))
	}

	d.Mod(d, phi)
	log.Printf("d = %d", d)

	flag := os.Getenv("FLAG") // get the flag
	if len(flag) == 0 {
		log.Fatal(errors.New("empty flag"))
	}
	m := new(big.Int)
	m.SetString(hex.EncodeToString([]byte(flag)), 16)

	c := new(big.Int) 
	c.Exp(m, e, n) // c = pow(m,e,n)

	cb64 := []byte(base64.StdEncoding.EncodeToString(c.Bytes())) // base64 encoded the integer

	if err := ioutil.WriteFile("msg.enc", cb64, 0644); err != nil {
		log.Fatal(err)
	}

	pubasn1, err := x509.MarshalPKIXPublicKey(&rsa.PublicKey{N: n, E: int(e.Int64())})
	if err != nil {
		log.Fatal(err)
	}

	pubbytes := pem.EncodeToMemory(&pem.Block{
		Type:  "PUBLIC KEY",
		Bytes: pubasn1,
	})

	if err := ioutil.WriteFile("pubkey.pem", pubbytes, 0644); err != nil {
		log.Fatal(err)
	}
}

// gives primes p and q in hex
func getEnvNum(key string) *big.Int {
	value := os.Getenv(key)
	if len(value) == 0 {
		log.Fatal(fmt.Errorf("empty value for %q", key))
	}

	v := new(big.Int)
	v.SetString(value, 16)

	return v
}

// will give (p-1) * (q-1)
func getPhi(p, q *big.Int) *big.Int {
	one := big.NewInt(1)
	p1 := new(big.Int)
	p1.Set(p)

	q1 := new(big.Int)
	q1.Set(q)

	p1.Sub(p1, one)
	log.Printf("p - 1 = %d", p1)

	q1.Sub(q1, one)
	log.Printf("q - 1 = %d", q1)

	return p1.Mul(p1, q1)
}

// will give GCD and 2nd val - inverse of x w.r.t y
func GCD(x *big.Int, y *big.Int) (*big.Int, *big.Int) {
	if !isOdd(x) {
		panic("x is not odd")
	}

	u := new(big.Int)
	u.Set(x)

	v := new(big.Int)
	v.Set(y)

	a := big.NewInt(1)
	b := big.NewInt(0)
	c := big.NewInt(0)
	d := big.NewInt(1)

	for u.BitLen() > 0 {
		log.Printf("u = %d, v = %d", u, v)

		gcdLoop(x, y, u, a, b)

		gcdLoop(x, y, v, c, d)

		cmp := u.Cmp(v)
		if cmp == 0 || cmp == 1 {
			u.Sub(u, v)
			a.Sub(a, c)
			b.Sub(b, d)
		} else {
			v.Sub(v, u)
			c.Sub(c, a)
			d.Sub(d, b)
		}
	}

	return v, c
}

func gcdLoop(x, y, u, a, b *big.Int) {
	for isEven(u) {
		u.Rsh(u, 1)

		log.Printf("u = %d", u)

		if isEven(a) && isEven(b) {
			a.Rsh(a, 1)
			b.Rsh(b, 1)
		} else {
			a.Add(a, y)
			a.Rsh(a, 1)

			b.Sub(b, x)
			b.Rsh(b, 1)
		}
	}
}

func isOdd(b *big.Int) bool {
	return b.Bit(0) != 0
}

func isEven(b *big.Int) bool {
	return b.Bit(0) == 0
}
