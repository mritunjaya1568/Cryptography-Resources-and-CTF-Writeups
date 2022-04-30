# coding: utf-8
get_ipython().run_line_magic('clear', '')
l_c = ''.join(chr(c) for c in range (97,123)) 
l_c
u_c = ''.join(chr(c) for c in range (65,91)) 
u_c
l_e = l_c[13:] + l_c[:13]
l_e
u_e = u_c[13:] + u_c[:13]
u_e
str1 = "henlo"
so = ""
for c in str1:
    if c in l_c:
        so = so + l_e[l_c.find(c)]
    elif c in u_c:
        so = so + u_e[u_c.find(c)]
    else:
        so = so + c
        
so
d1  = { "A" : "~",
        "B" : "`",
        "C" : "@",
        "D" : "#",
        "E" : "$",
        "F" : "%",
        "G" : "^",
        "H" : "&",
        "I" : "*",
        "J" : "(",
        "K" : ")",
        "L" : "-",
        "M" : "_",
        "N" : "=",
        "O" : "+",
        "P" : "{",
        "Q" : "[",
        "R" : "]",
        "S" : ":",
        "T" : ";",
        "U" : "\'",
        "V" : "\"",
        "W" : ",",
        "X" : "<",
        "Y" : ".",
        "Z" : ">",
        "a" : "?",
        "b" : "/",
        "c" : "5",
        "d" : "1",
        "e" : "3",
        "f" : "2",
        "g" : "4",
        "h" : "9",
        "i" : "0",
        "j" : "8",
        "k" : "6",
        "l" : "7",
        "m" : "K",
        "n" : "Q",
        "o" : "F",
        "p" : "V",
        "q" : "X",
        "r" : "D",
        "s" : "S",
        "t" : "A",
        "u" : "J",
        "v" : "N",
        "w" : "M",
        "x" : "P",
        "y" : "I",
        "z" : "T",
        "~" : "A",
        "`" : "B",
        "@" : "C",
        "#" : "D",
        "$" : "E",
        "%" : "F",
        "^" : "G",
        "&" : "H",
        "*" : "I",
        "(" : "J",
        ")" : "K",
        "-" : "L",
        "_" : "M",
        "=" : "N",
        "+" : "O",
        "{" : "P",
        "[" : "Q",
        "]" : "R",
        ":" : "S",
        ";" : "T",
        "\'" : "U",
        "\"" : "V",
        "," : "W",
        "<" : "X",
        "." : "Y",
        ">" : "Z",
        "?" : "a",
        "/" : "b",
        "5" : "c",
        "1" : "d",
        "3" : "e",
        "2" : "f",
        "4" : "g",
        "9" : "h",
        "0" : "i",
        "8" : "j",
        "6" : "k",
        "7" : "l",
        }
vas1 = ""
so
d1.get('u')
d1['u']
str('J')
str(str('J'))
for i in so:
    scr1 = str(d1.get(i))
    vas1 += str(scr1)
    
vas1
arr1 = []
for c in vas1:
    arr1.append(ord(c))
    
arr1
arr2 = []
for i in arr1:
    if i % 2 == 0:
        i += 2
    else:
        i += 1
    arr2.append(i)
    
arr2
saa2t = ""
for c in arr2:
    saa2t += chr(c)
saa2t
d2  = { "~" : "A",
        "`" : "B",
        "@" : "C",
        "#" : "D",
        "$" : "E",
        "%" : "F",
        "^" : "G",
        "&" : "H",
        "*" : "I",
        "(" : "J",
        ")" : "K",
        "-" : "L",
        "_" : "M",
        "=" : "N",
        "+" : "O",
        "{" : "P",
        "[" : "Q",
        "]" : "R",
        ":" : "S",
        ";" : "T",
        "\'" : "U",
        "\"" : "V",
        "," : "W",
        "<" : "X",
        "." : "Y",
        ">" : "Z",
        "?" : "a",
        "/" : "b",
        "5" : "c",
        "1" : "d",
        "4" : "e",
        "2" : "f",
        "3" : "g",
        "9" : "h",
        "0" : "i",
        "8" : "j",
        "6" : "k",
        "7" : "l",
        "K" : "m",
        "Q" : "n",
        "F" : "o",
        "V" : "p",
        "X" : "q",
        "D" : "r",
        "S" : "s",
        "A" : "t",
        "J" : "u",
        "N" : "v",
        "M" : "w",
        "P" : "x",
        "I" : "y",
        "T" : "z",
        "A" : "~",
        "B" : "`",
        "C" : "*",
        "D" : "#",
        "E" : "$",
        "F" : "%",
        "G" : "^",
        "H" : "&",
        "I" : "@",
        "J" : "(",
        "K" : ")",
        "L" : "-",
        "M" : "_",
        "N" : "=",
        "O" : "+",
        "P" : "{",
        "Q" : "[",
        "R" : "]",
        "S" : ":",
        "T" : ";",
        "U" : "\'",
        "V" : "\"",
        "W" : ",",
        "X" : "<",
        "Y" : ".",
        "Z" : ">",
        "a" : "?",
        "b" : "/",
        "c" : "5",
        "d" : "7",
        "e" : "3",
        "f" : "2",
        "g" : "4",
        "h" : "9",
        "i" : "0",
        "j" : "8",
        "k" : "6",
        "l" : "1",
        }
vas2 = ""
for i in saa2t:
    scr2 = str(d2.get(i))
    vas2 += str(scr2)
    
vas2
d2['L']
d2['@']
sarev = vas2[::-1]
sarev
import base64
msg_b = sarev.encode("ascii") 
b64_bytes = base64.b64encode(msg_b)
b64_string = b64_bytes.decode("ascii")
print(b64_string)
output = "JUglWEMyZlo9MkpCPSgoWj1pKDJaPSgoe1M9Q1oiayNYPV1KI0paLUpKU0M="
base64.b64decode(output.encode()).decode()
sarev = '%H%XC2fZ=2JB=((Z=i(2Z=(({S=CZ"k#X=]J#JZ-JJSC'
vas2 = sarev[::-1]
vas2
get_ipython().run_line_magic('ls', '')
d2_inv = {v: k for k, v in d2.items()}
d2_inv
saa2t = ""
for i in vas2:
    saa2t += d2_inv[i]
    
saa2t
arr2 = []
for i in saa2t:
    arr2.append(ord(i))
    
arr2
len(arr2)
codecs.encode("a","rot_13")
import codecs
codecs.encode("a","rot_13")
def functor(letter):
    letter = codecs.encode(f"{letter}","rot_13")
    letter = d1[letter]
    letter = ord(letter)
    
functor('h')
import codecs
def functor(letter):
    letter = codecs.encode(f"{letter}","rot_13")
    letter = d1[letter]
    letter = ord(letter)
    return letter
    
functor('h')
arr2
lest1 = []
for i,j in d1.items():
    lest1[i] = functor(i)

print(lest1)
lest1 = {}
for i,j in d1.items():
    lest1[i] = functor(i)

print(lest1)
lest1 = []
for i,j in d1.items():
    a = functor(i)
    a+=1
    if a%2 == 0:
        a+=1
    lest1[i] = a
    
print(lest1)
lest1 = {}
for i,j in d1.items():
    a = functor(i)
    if a%2 == 0:
        a+=1
    a+=1
    lest1[i] = a
print(lest1)
flag = "KCTF{MuHUhAH@Ha_F@tmAn_will_K1lL_All_TH3_Av3nGeR$}"
lest2 = []
for i in flag:
    lest2.append(lest1[i])
    
flag = "MuHUhAH@Ha_F@tmAn_will_K1lL_All_TH3_Av3nGeR$"
lest2 = []
for i in flag:
    lest2.append(lest1[i])
    
lest2
get_ipython().run_line_magic('ls', '')
get_ipython().run_line_magic('save', 'current-session ~0/')
