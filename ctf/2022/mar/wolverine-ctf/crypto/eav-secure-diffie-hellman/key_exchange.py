from Crypto.Util.number import bytes_to_long

# I love making homespun cryptographic schemes!

def diffie_hellman():
    f = open("flag.txt", "r")
    flag = f.read()
    a = bytes_to_long(flag.encode('utf-8'))  # 67514057458967447420279566091192598301
    p = 320907854534300658334827579113595683489
    g = 3
    A = pow(g,a,p) #236498462734017891143727364481546318401

if __name__ == "__main__":
    diffie_hellman()

# EAV-Secure? What's that?

# Definition of EAV-security (indistinguishability for a single message against an eavesdropper).

