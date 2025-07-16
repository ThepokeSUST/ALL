import numpy as np

print(np.__file__)

print(np.__version__)

list =[1,2,'dipok']
print(list , type(list))
a=np.array([1,2,3,4])
print(a,type(a))

b=np.array([ [1,3],
           [2,4]])
print(b,type(b))

c=np.array([[[12, 2, 3],
              [3,4,6],
              [6,False,20]
              ]])
print(c,type(c))

print(a.size,b.size,c.size)
# print()
print(a.shape)
print(b.shape)
print(c.shape)
print(c.dtype)

c=c.transpose()
print(c, c.shape)
