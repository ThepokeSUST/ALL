import numpy as np

arr=np.array([1,2,3,4])
brr=np.array([5,6,7,8])

print(np.concatenate((arr,brr)))

arr=np.array([[1,2],[3,4]])
brr=np.array([[5,6],[8,9]])
print(brr.shape)
crr=np.concatenate((arr,brr),axis=1)
print(crr)

drr=np.array([1,2,3,4])
err=np.array([0,0,0,0])
frr=np.empty(8,dtype=int)
print(frr,frr.shape)
print(np.concatenate((drr,err),out=frr))
print(frr)

