

x,y= input("enter two number ").split()

print(f"number x = {x} number y = {y}")

x= input("enter list ").split()
print(x)

print(type(x))


y= list(input("enter number that convert into list "))

print(type(y),y)

y= tuple(input("enter number that convert into tuple" ))
print(type(y),y)


# del(y)
del y
print("deleted y variable")
print(y)