
def func1():
    global a
    a=3
    print("from func1",a,sep="=")
def swap(a ,b ):
    temp=a
    a=bb=temp
    return

a=2
b=3
print(f"a={a} b={b}")
swap(a,b)
print(f"a={a} b={b}")
var=func1()
print("from global",a,sep="=")
print(type(var))