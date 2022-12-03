v = vector(QQ, (4,6,2,5))
print("Size = ",v.norm())

# 9 

## 2nd method

w = vector((4,6,2,5))
size = sqrt(w.inner_product(w))
print(size)
