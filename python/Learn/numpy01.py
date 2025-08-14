import numpy as np

a=np.array([1,2,3])
print(a)
a=np.array((1,2))

a=np.zeros((2,))
print(a,a.shape)
a=np.zeros((2,5))
print(a,a.shape,a.size)
a=np.arange(0,10,2)
print(a,a.shape,a.size)

a=np.full((2,5),7)
print(a,a.shape,a.size)

b=a.transpose()
print(a,b,sep="\n")

b=np.empty((2,5),dtype=float)
print(b)