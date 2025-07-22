import numpy as np

arr= np.arange(2,12).reshape(2,5)
print(arr)
print(arr.size)

brr= np.ones((2,5))
print()

print(brr)

crr= np.add(arr,brr)
print(crr)

crr=np.subtract(arr,brr)
print(crr)
print()
brr=np.add(brr,brr)
print(brr)

crr=np.multiply(arr,brr)
print()
print(arr,crr)
crr=np.divide(crr,brr)
print(crr)

print(arr.shape)
print(brr.shape)
brr=brr.reshape(5,2)
crr=arr.dot(brr)
print(crr)

print(arr.max(), arr.min())
print()
print(crr,crr.dtype)
drr= np.sum(crr,axis=0)
print(drr,drr.dtype)
drr=np.sum(crr,axis=1)
print(drr,drr.dtype)
print(np.sum(crr),np.mean(crr))
print(np.sqrt(crr))