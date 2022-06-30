from pwn import *
from Crypto.Util.number import *

my_1k_wallet_privkey = "8b09cfc4696b91a1cc43372ac66ca36556a41499b495f28cc7ab193e32eadd30"
my_1k_wallet = int(my_1k_wallet_privkey,16)

p = pow(2,521)-1

y01 = "0x01"

# change this
s01 = "010c08c2e51d9eec5607ba11dc73ac47688a73ff915971afc250a21d7b6c6999d2eae79c6f5337235c706ba80d1a0e1ab2a2022805d4088356c440dbe5d7c26c0a95"
k_constant_term = (int(s01,16) - 5)%p

y02 = ((my_1k_wallet-k_constant_term)*inverse(5,p))%p
print("y02:",y02)
print("hex-val:",hex(y02))

# change this
y0 = "30cb0c3893ad03eecb412fa0b5aa581e4ab599afbae9433f89792d4db71e146f6ac703a22c9b2142f3a633f7203d8cbd93ac062bebcf0a68a6a1f43f52e5aa3b41"
y0_val = int(y0,16)

s0 = (k_constant_term + 5*y0_val)%p
print("original secret:",s0)
print("hex-val:",hex(s0))


''' y02: 4773087849667407141367803783959656302496361214716178982845226258984905128466217972754979446789217995193474276266168946220208048575085265422781294719190365932
hex-val: 0x163fe3f6bc6e03721fe7462d3e8dd8b517de8cce2ee1c7672bcac6080ea5147a29ded7c467d0a0e7109e01f0869be76c9c0aa7f362788d0858e815ca3e149b2f6ec
original secret: 91675691026638312221015670544135849969381153898411664604531992235405943452374
hex-val: 0xcaae9a323ec9ab32aaabe0bb41da66845e46e16f13b762056aa122763ebf32d6
'''




#statement 1 - {"sender":"hyper","x":6,"y":"0x01"}

# statement 2 - {"sender":"hyper","x":6,"y":"0x163fe3f6bc6e03721fe7462d3e8dd8b517de8cce2ee1c7672bcac6080ea5147a29ded7c467d0a0e7109e01f0869be76c9c0aa7f362788d0858e815ca3e149b2f6ec"}

# statement 3 - {"privkey":"caae9a323ec9ab32aaabe0bb41da66845e46e16f13b762056aa122763ebf32d6"}



# full solution 

''' ➜  Toshi_treasure git:(main) ✗ nc socket.cryptohack.org 13384
{"sender": "your_share", "x": 6, "y":"0x30cb0c3893ad03eecb412fa0b5aa581e4ab599afbae9433f89792d4db71e146f6ac703a22c9b2142f3a633f7203d8cbd93ac062bebcf0a68a6a1f43f52e5aa3b41"}
{"sender": "mpeg", "msg": "alright, let's go! I have x=2 and I'll start by secretly submitting my y point to our key-combiner", "x": 2, "y": "0x???"}
{"sender": "codecrafting", "msg": "submitting my point", "x": 3, "y": "0x???"}
{"sender": "RichGirlOnLSD", "msg": "sending in my x=4 point, so excited!", "x": 4, "y": "0x???"}
{"sender": "pogo", "msg": "sent my x=5 val, your turn next hyper", "x": 5, "y": "0x???"}
{"sender":"hyper","x":6,"y":"0x01"}
{"sender": "ssss-combine", "privkey": "010c08c2e51d9eec5607ba11dc73ac47688a73ff915971afc250a21d7b6c6999d2eae79c6f5337235c706ba80d1a0e1ab2a2022805d4088356c440dbe5d7c26c0a95"}
{"sender": "mpeg", "msg": "WTF, this privkey is invalid!"}
{"sender": "codecrafting", "msg": "hmm, hopefully someone just missed a character when pasting. let's try this one more time, and send in all our shares again. your turn hyper"}
{"sender":"hyper","x":6,"y":"0x163fe3f6bc6e03721fe7462d3e8dd8b517de8cce2ee1c7672bcac6080ea5147a29ded7c467d0a0e7109e01f0869be76c9c0aa7f362788d0858e815ca3e149b2f6ec"}
{"sender": "ssss-combine", "privkey": "8b09cfc4696b91a1cc43372ac66ca36556a41499b495f28cc7ab193e32eadd30"}
{"sender": "mpeg", "msg": "this privkey links to a wallet which only has $1k in it! another mistake by the game devs, what a surprise :("}
{"sender": "Your Bitcoin Wallet", "msg": "send me a JSON key 'privkey' with the hex-encoded value of your private key to unlock the wallet"}
{"privkey":"caae9a323ec9ab32aaabe0bb41da66845e46e16f13b762056aa122763ebf32d6"}
{"sender": "flag", "msg": "congrats, you fooled 'em with maths, crypto{shoulda_used_verifiable_secret_sharing}"}
'''
