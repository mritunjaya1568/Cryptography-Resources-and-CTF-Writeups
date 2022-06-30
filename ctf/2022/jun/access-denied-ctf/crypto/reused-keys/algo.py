
#This notebook shows examples of One-time Pad encryption and partial decryption of the messages when the 
#same key is used more than once for encryption.Before using XOR operation, we are going to convert 
#plaintext messages to hex strings. 
#This way, each character is represented by its ASCII code - a number from 0 to 255.
#In the hexadecimal system, any such number has two digits. 
#We write these two hexadecimal digits instead of the initial character, 
#like "6f" instead of letter "o", where 'f' corresponds to hexadecimal number 15. 
#We can also convert back from hex strings to the regular strings. 
#These conversions are needed for demonstration purposes only: to 
#avoid using unreadable/invisible characters in the strings we work with.

# Converts string to hex

from functools import reduce

flag = '65f32f851cdb20eee875eea5a9a30f826cfd247eb550dcc89d1d4cdf952f5c28ca5f162355567fd262bb96'
encrypted = '70f8259330c137d4e873ff9ea6a559ab2dea1a60d943859aa545578395301d28a0741d1e065a24d45cb19f'


def toHex(s):
    lst = []
    for ch in s:
        hv = hex(ord(ch)).replace('0x', '')
        if len(hv) == 1:
            hv = '0'+hv
        lst.append(hv)
    
    return reduce(lambda x,y:x+y, lst)

print("toHex(\"Hello World\") = \"%s\"" % toHex("Hello World"))

# Converts hex to string
def toStr(s):
    return s and chr(int(s[:2], base=16)) + toStr(s[2:]) or ''

print("toStr(\"736f6d65206d657373616765\") = \"%s\"" % toStr("736f6d65206d657373616765"))




# Computes XOR of two messages s1 and s2.
# s1 and s2 must have the same length.
def Xor(s1, s2):
    res = ""
    for i in range(len(s1)):
        res += format(int(s1[i], 16) ^ int(s2[i], 16), '01x')
    return res

#To encrypt, we need to Xor the message with the key and get the ciphertext. 
#However, before doing that we are going to convert them both to hex strings. 
#To decrypt, we need to xor the ciphertext with the key. However, before doing that we need
#to convert key to hex, and after doing that we need to convert the resulting hex string to 
#the regular string, so that we get the initial message and not its hex form.
# In[3]:


# message = "secret message"
# key     = "my secret keys"
# print("hex(message) = %s" % toHex(message))
# print("hex(key) = %s" % toHex(key))
# ciphertext = Xor(toHex(message), toHex(key))
# print("ciphertext: %s" % ciphertext)
# recovered_message = toStr(Xor(ciphertext, toHex(key)))
# print("recovered message: %s" % recovered_message)

#Now lets see what happens if the same key is used to encrypt two different messages:


# message1 = "steal the secret"
# key      = "supersecretverys"
# val1 = toHex(message1)
# val2 = toHex(key)
# val3 = Xor(val1,val2)
# print(val1,val2,val3,type(val1))

# message2 = "the boy the girl"
# key      = "supersecretverys"
# ciphertext1 = Xor(toHex(message1), toHex(key))
# ciphertext2 = Xor(toHex(message2), toHex(key))
# xor_ciphertexts = Xor(ciphertext1, ciphertext2)
# xor_messages = Xor(toHex(message1), toHex(message2))
# print(xor_ciphertexts)
# print(xor_messages)
# if xor_ciphertexts == xor_messages:
#     print("Xor of the ciphertexts is the same as xor of messages")
# else:
#     print("Xor of the ciphertexts differs from the xor of messages")

ciphertext1 = flag
ciphertext2 = encrypted
xor_ciphertexts = Xor(ciphertext1, ciphertext2)


#Now you see that if Eve doesn't know the key and doesn't know the messages but intercepts just the ciphertexts,
#she can compute Xor of the ciphertexts and get the same result as if she computed Xor of the initial messages!

#How does this help?

#We can do some statistical analysis using our knowledge of English. The simplest example is the following.
#We know that English sentences often contain word " the " delimited by spaces on both sides. Lets try
#to "guess" that one of the messages contains this word " the " starting from position 1, 2, 3,... and so on.
#If our guess is correct, and message1 indeed contains word " the " starting from some position, then by
#xoring this " the " with the corresponding positions of the xor_ciphertexts we will get some English letters
#in the corresponding positions of message2. If our guess is incorrect, we will get just some rubbish.


def TryGuessingSubstring(substring, message_length, xor_messages):
    good_guesses = []
    for pos in range(message_length - len(substring) + 1):
        guess = toHex(chr(0) * pos + substring + chr(0) * (message_length - len(substring) - pos))
        other_message_part = toStr(Xor(guess, xor_messages))[pos:pos + len(substring)]
        good_guess = True
        for i in range(len(other_message_part)):
            if not other_message_part[i].isalpha() and not other_message_part[i].isspace():
                good_guess = False
                break
        if good_guess:
            good_guesses.append((guess, pos, other_message_part))
        
    print("\nGood guesses:")
    for guess in good_guesses:
        print("position: %d, one message part: \"%s\", another message part: \"%s\"" % (guess[1], substring, guess[2]))
        
#TryGuessingSubstring(" the ", len(message1), xor_messages)

#Now we can see that one of the messages has "oy th" starting from position 5, or " th" starting from position 
#7, and one of the messages has " the " startin from position 7. 
#We could guess that this is the same message which has "oy the " starting from position 5.


TryGuessingSubstring("_", 43, xor_ciphertexts)

#Now we ve guessed parts of both initial messages. If we had even more ciphertexts of different
# messages encypted with the same key, by xoring each pair the same way we could reconstruct more.


# flag_text = b"accessdenied"
# test = b"this_is_not_"
# some_simple_text