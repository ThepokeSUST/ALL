
def change(string,name):
    return string+"loop"+name




a=[1,2,3,4]

# aa=map(lambda x:x+1,a)
# print(aa,type(aa))
# b=list(aa)
# print(aa,type(aa))
# print("b ",b)
# c=list(aa)
# print("c",c)


b=list(map(lambda x: x*2,a ))
print(a,b)
c=list(map(lambda x,y: x+y,a,b))
print(c)

a=["A","B","C","D"]
print(c)
c=list(map(change,a,a))
print(a,c)