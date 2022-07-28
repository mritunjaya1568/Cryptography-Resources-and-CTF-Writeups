# solution is incomplete , will complete in near future , so the basic idea is giving a list of ciphertext
# then checking for english letters and if some is giving good guess / means printable chars then 
# will find the key and find if rest ciphertext are also giving good guess / means printable chars and if 
# pass then that means at those places will replace the key value 



# 1000 common words in english dictionary  
# https://gist.github.com/deekayen/4148741


import string
from english_words import english_words_lower_alpha_set as words
from functools import reduce
from pwn import xor



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


message = "secret message"
key     = "my secret keys"
print("hex(message) = %s" % toHex(message))
print("hex(key) = %s" % toHex(key))
ciphertext = Xor(toHex(message), toHex(key))
print("ciphertext: %s" % ciphertext)
recovered_message = toStr(Xor(ciphertext, toHex(key)))
print("recovered message: %s" % recovered_message)

#Now lets see what happens if the same key is used to encrypt two different messages:


message1 = "steal the secret"
message2 = "the boy the girl"
key      = "supersecretverys"
ciphertext1 = Xor(toHex(message1), toHex(key))
ciphertext2 = Xor(toHex(message2), toHex(key))
xor_ciphertexts = Xor(ciphertext1, ciphertext2)
xor_messages = Xor(toHex(message1), toHex(message2))
print(xor_ciphertexts)
print(xor_messages)
if xor_ciphertexts == xor_messages:
    print("Xor of the ciphertexts is the same as xor of messages")
else:
    print("Xor of the ciphertexts differs from the xor of messages")

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
        
    # print("\nGood guesses:")
    for guess in good_guesses:
        print("position: %d, one message part: \"%s\", another message part: \"%s\"" % (guess[1], substring, guess[2]))
        
#TryGuessingSubstring(" the ", len(message1), xor_messages)

#Now we can see that one of the messages has "oy th" starting from position 5, or " th" starting from position 
#7, and one of the messages has " the " startin from position 7. 
#We could guess that this is the same message which has "oy the " starting from position 5.


TryGuessingSubstring("oy the ", len(message1), xor_messages)

#Now we ve guessed parts of both initial messages. If we had even more ciphertexts of different
# messages encypted with the same key, by xoring each pair the same way we could reconstruct more.



lest = []
f = open("wordlist.txt",'r')
for word in f:
    lest.append(word.strip())

# for word in lest:
#     if len(word) > 4:
#         TryGuessingSubstring(word, len(message1), xor_messages)

sect = {'594bcf4f1d8ce99c4aa38a5c576c8f49286c8e60f0964ec7b8a290ce45dc80bd', '7656c05a45c3e28516b8de09492684042376d86ce5c17e98aa89d6911c879be0ffdb06bac9afa285934941593703bd057f9554f47d6a3aadae89755e7e88cd953d18bf3f43319c12510cade78c092ee23b33baa1c3a9fa46cd5183d11d', '6e51c45a0cc3f09800a99f195031d54d19799135b5c9708fe49391da139ccca8f8c602ffdef1e7b78442185f394bb557', '6a5cc4570893e1d711bf9f03442c9b491e6dce70a185659ee8dd8288138182e0f6da15bac4aee78680530a10215af4183cc212bb5d2b3cace38d76457adccc8e375ffd7802319d181f6c', '7319c557088ffedb59939807497fd74b047b9d70b3c0638ff9959f9415c885a6b7dc14bac9b2a2978f171510204cb91373d75df86164', '6d51d74b4982b29918a9cb12052cd6411b729d61adcc62d6fd9c9f9406c884a1f39a', '6e51d31f1d86e08510b8d30e052bd34d19799d7cb685659eec89d68e1a8dccb0f6c705bacebca9c3951003556357bb043d9553ee7e6a30a1e3896d443f8ecb942e45bf', '6d51cf1f0d8cb28311bfc64b42309b4b193ecd74accb659fe39ad69b1c8ccca2e2dd1dfec4b3a0c4805c0d10374bb15627dc51fe35', '731edb1f1c8dfa9609aac64705169b40126dd867b3c0319ff9d1d68e1a8dcca6f6c11dee8aaee789885e041c6341a10273fc1bf62a3f3cb0a290694e3f9dc8977a42f9744336951a1461fbea87103be23738f0', '7b4a96560fc3dbd711bbdb4b4431c2040077ce7de5d17ed6ef98d6931cc898a8f29403f3cab5b3c5c1794153224df30272', '6d51d74b4982b29b16ae9f04437fcf4c1e70da66e5d17997f9dd82921786ccb3f2d11cffc9fdb38bc15d0410304cf41b32c74afe66263dadb0c078597bdcd1953b42e5700a2b95151d28f7a28a1d3da77a3fbbe2cfacf60ac04d95d6540c04bf845f2097622945c55e5c4538a7f45b166cb80266a4d6b396d62285f039df850eda64549305f7211016175036942d4bfe210e12ed959b7a8af9c032ca509e3b', '74569a1f20c4fe9b59bdd04b4c319b50183ef97aa9c968d6ec9392da068d80acb7dc14e88daeb396805906583703bb0327', '6e51d34c0cc3fa980ba9da18097fcf4c1e6d9d76a4d7639fec9a93da5fc884afe09438bac1b2a6908955415d3a50b11a359555f52a3e3ab1b0c07a566d8ecd9a3d53b13c43319c12086aa9e7c21d27ae7a35b7f29be1f15fdd03af9f400a0cb5811c2f9c60601784435d006cbbf91e0f24b00b60be98d4', '6d56c3530dc3dbd711bbc90e053dde481e7bcb70a185659ee893d68e1a8998e0de9412f5d8b1a3c4935500532b03a70330dd1cff6f3a26b0b0c076513f94d196335af870172c9b194e', '7e4bd34c1aceff9612b3d10c053ed5405753d479a9cc7f93ff84', '734d965c088db58359b8da4b5130c94a5771c861e9857383f9dd9f8e528b8daeb7d614bac4baa98b9355051e', '7319c557088ffed715b5cc0e053acd410567c97daccb76d6ec9392da1c8798e0f0d105bac5b4aac48351025b6d', '7256c11f1991fd821dfade05417fd345076ec435adc0369ae1dd949f529f84a5f99419ff8dbaa29092100c49634dbb023694', '7e56da5310c3e59e15b69f1f4d36d54f576ad574b18558d1e0dd9a9f139e85aef09410badeb8a48b8f5441583650b6173dd11cfa642e72acab816d176b94c1893f50fe630665bd571c38a8f6c20f3eb03f31a7a1c2a4b343c70392d756421aab825226d7', '7b57d21f20c3e19f18b6d34b4c38d54b057b9d7cb18b', '754cc40049b4fa8e59b5ca191a', '784cc21f20c3e59e15b69f184d30cc041f77d03b'}


ct1 = '594bcf4f1d8ce99c4aa38a5c576c8f49286c8e60f0964ec7b8a290ce45dc80bd'
ct2 = '7656c05a45c3e28516b8de09492684042376d86ce5c17e98aa89d6911c879be0ffdb06bac9afa285934941593703bd057f9554f47d6a3aadae89755e7e88cd953d18bf3f43319c12510cade78c092ee23b33baa1c3a9fa46cd5183d11d'

ct1 = bytes.fromhex(ct1)
ct2 = bytes.fromhex(ct2)

final = xor(ct1,ct2)[:min(len(ct1),len(ct2))]

# for word in lest:
#     if len(word) > 4:
#         TryGuessingSubstring(word, len(final), final.hex())

