
class Dog:
    pass
class Student:
    scl_name="DN high scl"

    def __init__(self,name,cls,roll):
        self.name=name
        self.cls=cls
        self.roll=roll


s1 = Student("dipok","hsc",32)
s2=Student("dipu","ssc",43)
print(f"{s1.scl_name} {s2.scl_name}")
print(f"name {s1.name} class {s1.cls} roll {s1.roll}")
print(f"name {s2.name} class {s2.cls} roll {s2.roll}")

s1.cls="honours"
s2.name="tipu"
print(Student.scl_name)
print(f"name {s1.name} class {s1.cls} roll {s1.roll}")
print(f"name {s2.name} class {s2.cls} roll {s2.roll}")
Student.scl_name="Fanchuganj"

print(f"{s1.scl_name} {s2.scl_name}")
s1.scl_name="SUST"
print(f"{s1.scl_name} {s2.scl_name}")
print(Student.scl_name)

s2.scl_name="SUST"
print(f"{s1.scl_name} {s2.scl_name}")
print(Student.scl_name)