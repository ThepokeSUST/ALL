



def even(x):
    return x%2==0

a=[1,2,3,4,5,6,7,8,9,10]
b=filter(even,a)
print(b,type(b))
c=list(b)
print(c)
c=list(b)
print(c)
b=filter(even,a)
c=map(lambda x: x*2,b)
print(c,type(c))
print(list(c))
print(list(c),list(b))
