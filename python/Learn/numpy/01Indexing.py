import numpy as np


arr= np.array([1,2,3,4])
index=[0,1,3]
print(arr[index],arr)

arr=np.array([[1,2,3],
              [5,6,7],
              [32,34,45]])
print(arr)
index=[0,1]
print(arr[index])

print(arr[np.ix_([0,2],[2,1])])

print(arr[[0,1],[2,1]])#1D