
class animal:

    def __init__(self):
        pass

    def setName(self,name):
        self.name=name
    def getName(self):    
        return self.name
    def setAge(self,age):
        self.age=age
    def getAge(self):
        return self.age    
class Human:
    def setName(self,name):
        self.name=name
    def setAge(self,age):
        self.age=age  

h1=Human()
h1.setName("dipok")
h1.setAge(21)
print(h1.name,h1.age)
a1=animal()
a1.setName("Dog1")
print(a1.getName())
# print(a1.getAge())#won't work because a1 object has no attribute age

a1.setAge(9)#now it knows age

print(a1.getAge())
