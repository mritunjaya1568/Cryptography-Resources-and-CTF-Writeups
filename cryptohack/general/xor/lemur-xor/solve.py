from pwn import xor


# 1st solution -> https://online-image-comparison.com/result


# 2nd solution
# https://crypto.stackexchange.com/questions/88430/how-to-decrypt-two-images-encrypted-using-xor-with-the-same-key
# https://pillow.readthedocs.io/en/stable/reference/ImageChops.html



from PIL import Image, ImageChops
im1 = Image.open('lemur.png')
im2 = Image.open('flag.png')

im3 = ImageChops.add(ImageChops.difference(im2, im1), ImageChops.difference(im1, im2))
# you can also use difference instead of subtract 

im3.show()
# im3.save("final.png")


# crypto{X0Rly_n0t!}






