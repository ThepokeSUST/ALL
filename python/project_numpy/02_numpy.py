import numpy as np

a= np.empty((4,4),dtype=int)
print(a,type(a),a.dtype)

a=np.ones(8,dtype=str )
print(a,type(a),a.dtype)

a=np.arange(2,20,2)
print(a,type(a),a.dtype)

b=np.array([1,2])
print(b.shape,b)
b=b.reshape((2,1))
print(b.shape,b)  

b=b.flatten()
print(b.shape,b)

c=np.array([
    [3,4],
    [5,6]
])

print(c)
d=c.ravel()
print(c,d)