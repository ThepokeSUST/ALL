def evenOdd(x:int)->str:
    if(x%2==0):
       return "even"
    else:
        return "odd"
       
def welcome():
    print("welcome to data science")

def sum(a,b):
    return a+b
def defaultArg(x,y=6):
    print(x,y)
def ArbiArg(*arg):
    for i in arg:
        print(i)
      

def _2ArbiArg(**arg):
    for i,j in enumerate(arg):
        print(i,j)
    print()
    for key,value in arg.items():
        print(key,value)    
welcome()
welcome()

def hellow():
    print("hello world")

hellow()    

print("inside the for loop")
for i in range(0,10,2):
    welcome()
    hellow()
print("end of the loop")   

# print( evenOdd(int(input("enter any number"))))

defaultArg(40,5)
defaultArg(2)
defaultArg(x=333,y=4444)
defaultArg(y=222,x=555)
defaultArg(3,y=444)

ArbiArg(1,3,"dipu")
_2ArbiArg(_1="one",_2="two",dipu="my name", my_name="dipok" )
