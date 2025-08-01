

x=5
y=2
print(type(x),type(y))
z=x/y

print(type(z),z)

z=x//y #floor integer
print(type(z),z)

z=y**x
print(type(z),z)

b=True
print(type(b))
b= x<y
print(type(b),b)


a=10
print(~a,a) #-(a+1)
print(a>>2)
b=5
print(a|b)

a=10
b=20
c=a

print(a is not b)
print(a is c)

List = [10,34,45,56,67]
print(type(List),List)

print(a in List)
print(b in List , b not in List)

# print(a in b)

# ternary operator 
a =10
b=20

Max=a if a>b else b
print(Max)

print("on true") if a>b else print("on false")
