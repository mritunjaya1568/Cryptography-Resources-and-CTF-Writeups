from PIL import Image

image = Image.open("ALLES.enc.png").convert("F")
width, height = image.size
x = []
for j in range(height):
    for i in range(width):
        x.append(image.getpixel((i, j)))

ROUNDS = 32
A = Matrix(512*512, 512*512)
#  b = Matrix(512*512, 1, x)
#  for i in range(width):
#      for j in range(height):
#          di, dj = 1337, 42
#          for k in range(ROUNDS):
#              di, dj = (di * di + dj) % width, (dj * dj + di) % height
#              ti, tj = (i + di) % width, (j + dj + (i + di)//width) % height
#              A[j*512 + i, tj*512 + ti] = 1

print("matrix made, computing inverse")
Ainv = A.inverse()
