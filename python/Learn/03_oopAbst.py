from abc import ABC
from abc import abstractmethod

class A(ABC):
    @property
    @abstractmethod
    def m(self):
       pass
    @abstractmethod
    def m1(self):
        pass
    def m2(self):
        print("class A m2")
    def __str__(self):
       return "good work"+"ok"

class B(A):
    @property
    def m(self):
        print("class B m")
    def __str__(self):
        return "this is class B"
    def m1(self):
        print("m1 from A")


class check:
    clasVar=45
    @staticmethod
    def staticmethod(a,b):
        print("this is static method")
        print(a+b)

    @classmethod
    def clsmethod(cls):
        cls.clasVar=56
        print("this is class method",cls.clasVar,cls)
    def __init__(self,a=55):
        self.a=a
        print("default constructor")
    @property
    def pro(self,a=0,b=9):
        print("this is property method",a,b)


c=check()
c.staticmethod(1,3)
c.pro
c.clsmethod
c.clsmethod()
print("start")
# c=A()
b=B()
b.m1()
print("end")