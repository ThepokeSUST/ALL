import numpy as np

arr=np.array([1,2,3,4])
print(arr.shape)

brr=arr[0:2,np.newaxis]
print(arr.shape,brr.shape)
print(brr)