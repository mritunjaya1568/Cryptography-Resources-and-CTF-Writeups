v = vector(QQ, (4,6,2,5))
print("Size = ",v.norm())

# 9 

## 2nd method

w = vector((4,6,2,5))
size = sqrt(w.inner_product(w))
print(size)

## 3rd method
## dot product can also be written as a * b

f = vector(QQ, (4,6,2,5))
val = sqrt(f * f)
print(val)
