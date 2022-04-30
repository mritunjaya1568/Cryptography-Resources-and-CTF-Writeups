import base64
str1 = input("Enter text to encrypt: ")
# str1 = "henlo"
arr1 = []
l_c = ''.join(chr(c) for c in range (97,123)) 
u_c = ''.join(chr(c) for c in range (65,91)) 
l_e = l_c[13:] + l_c[:13]
u_e = u_c[13:] + u_c[:13]
# rot 13 
so = ""
for c in str1:
    if c in l_c:
        so = so + l_e[l_c.find(c)]
    elif c in u_c:
        so = so + u_e[u_c.find(c)]
    else:
        so = so + c
# so = "urayb"
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

for i in so:
    scr1 = str(d1.get(i))
    vas1 += str(scr1)

# vas1 = d1[so]

for c in vas1:
    arr1.append(ord(c))

import codecs
def functor(letter):
    letter = codecs.encode(f"{letter}","rot_13")
    letter = d1[letter]
    letter = ord(letter)
    return letter

lest1 = []
for i,j in d1.items():
    lest1[i] = functor(i)

print(lest1)

