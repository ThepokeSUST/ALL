

def add(a,b):
    return a+b

def subtract(a,b):
    return a-b


dic={
    "add":add,
    "sub":subtract
}

print(dic["add"](3,4))
print(dic["sub"](3,4))
print(dic["add"])
#print(dic["as"])

