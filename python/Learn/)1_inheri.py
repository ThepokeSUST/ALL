
class A:
    clsa=None
    def __init__(self,name):
        print("this is class A")
        self.name=name

    def setclsa(self,a):
        A.clsa=a
        print("golbal variable x",x)

class B(A):
     pass
         
    # def __init__(self):
    #      s="dipok"
    #      print("this is class B")
    #      super().__init__("dipok")
   



def increase():
    global x
    x=1
    x+=2
    print(x)

x=10
increase()
print(x)

a= A("A")
a.setclsa(4)
print(f"class A {a.clsa}")

b1=B("dipok")
b1.setclsa(8)
print("clasa ",A.clsa)