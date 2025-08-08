

class A:
    def __init__(self,o):
        print("this is A cons")

class B(A):
    pass
    # def __init__(self):
    #     # super().__init__()   
    #     print("this is class B cons")
class C(B):
    # def __init__(self):
    #     print("this is C cons")             
    pass



c=C(7)