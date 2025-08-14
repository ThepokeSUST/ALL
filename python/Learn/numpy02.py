import numpy as np

arr= np.full((5,2),7)
print(arr)
print(arr.reshape((2,5)))
print(arr)
print(arr.resize((2,5)))
print(arr)

arr=np.arange(9)
print(arr)
print(arr.reshape((3,3)))
print(arr)
arr.resize((5,5))
print(arr)