# https://pastebin.com/CWkGcRjw



from pwn import xor
from PIL import Image, ImageChops
im1 = Image.open('lemur.png')
im2 = Image.open('flag.png')

print(im1.size)
w,h = im1.size
assert im1.size == im2.size

pix1 = im1.load()
pix2 = im2.load()

im3 = Image.new("RGB",size=im1.size,color = "black")
pix3 = im3.load()

for i in range(w):
	for j in range(h):
		a1,b1,c1 = pix1[i,j]
		a2,b2,c2 = pix2[i,j]
		pix3[i,j] = (a1^a2,b1^b2,c1^c2)


im3.show()
# im3.save("final2.png")


