from PIL import Image 

image1 = Image.open("secret.png")
image2 = Image.open("ciphered_message.png")

image1 = image1.copy()
image2 = image2.copy()

# image1.show()
# image2.show()

image1_size = image1.size
image2_size = image2.size

print(image1_size)
print(image2_size)

image2.paste(image1,(0,0),image1)

image2.show()

image2.save("flag.png")
'''
flag = TMUCTF{W3_h0p3_y0u_3nj0y_7h15_c0mp371710n_4nd_7h4nk_y0u!}

our flag is in flag.png file 
'''