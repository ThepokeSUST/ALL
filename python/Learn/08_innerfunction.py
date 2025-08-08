
def func1(name,d):
    a=23
    b=9
    c=999
    print("inside the func1 outer function")
    def infunc():
        print(name)
        # name="dipok"
        print(c)
        # c=90# cannt change without declare nonlocal c
        nonlocal a
        print("this is inner function")
        print(a)
        a+=d
        print(a)
        b=90
        print("b=",b)
    def f():
        print(name)
        print("a is",a)

    infunc()
    print("a=",a)
    print("b=",b)
    print(name)
    return f    

f=func1("dipu",3)
func1("dipok",5)
f()