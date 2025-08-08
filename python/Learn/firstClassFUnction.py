def TakeFunc(f):
     f()

def returnFunc():
    def f1():
        print("nested f1")
    print("test")    
    f1()
    globals()['f1']()
    print("test end")    
    return f1    
    
def f1():
    print("this is f1")
def func1():
    print("this is func1")

def func2(a):
    print("this is func2",a)


func1()
func2(3)

#assigning function to variable
f1=func1
f2=func2
f1=f1
f1()
f2(4)
print(type(f1),type(f2))
print("..............")
TakeFunc(f1)
f=returnFunc()
f()
print("==========")
globals()['f1']()