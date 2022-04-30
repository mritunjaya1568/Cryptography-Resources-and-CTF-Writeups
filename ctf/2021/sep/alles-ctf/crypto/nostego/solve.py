from PIL import Image, ImageFilter
import os 

# size_300 = (300,300)
# size_700 = (700,700)

# image1 = Image.open('ALLES.enc.png')
# # image1.show()

# # image1.save('alles.jpg')

# for f in os.listdir('.'):
# 	if f.endswith('.jpg'):
# 		i = Image.open(f)
# 		fn, fext = os.path.splitext(f)
# 		print(fn,fext)

# 		i.thumbnail(size_700)
# 		i.save('700/{}_700{}'.format(fn,fext))

# 		i.thumbnail(size_300)
# 		i.save('300/{}_300{}'.format(fn,fext))

image1 = Image.open('ALLES.enc.png')

image1.convert(mode= 'L').rotate(90).save('al.jpg')


image1.filter(ImageFilter.GaussianBlur(15)).save('al.jpg')