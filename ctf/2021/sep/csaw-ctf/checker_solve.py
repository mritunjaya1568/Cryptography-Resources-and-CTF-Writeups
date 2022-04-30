encoded = "1010000011111000101010101000001010100100110110001111111010001000100000101000111011000100101111011001100011011000101011001100100010011001110110001001000010001100101111001110010011001100"

# left

def down(x):
    x = ''.join(['1' if x[i] == '0' else '0' for i in range(len(x))])
    return x

encoded = encoded[::-1]
encoded = encoded[25:] + encoded[0:25]

encoded = down(encoded)

encoded = encoded[160:] + encoded[0:160]



dest = {}
for i in range(256):
	dest[f"{i << 1:08b}"] = chr(i)

print(dest)



string = ""
for i in range(0,len(encoded),8):
	string2 = str(encoded[i:i+8])
	string+= dest[string2]

print(string)