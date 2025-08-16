import numpy as np

arr=np.array([1,2])
print(arr,type(arr))
arr=np.zeros((2,3),int)
print(arr,type(arr),type(arr[0][0]))

arr=np.ones((3,2))
print(arr,type(arr),type(arr[0][0]))

arr=np.full((2,3),9)
print(arr,type(arr),type(arr[0][0]))
# arr= range(1,10,1)
# print(arr,type(arr),type(arr[0]))
arr=np.arange(1,10,2,float)
print(arr,type(arr),type(arr[0]))

arr= np.linspace(1,10,4)
print(arr,type(arr),type(arr[0]))

arr=np.array([[11,2,3,10],
             [34,23,1,23]])
print(arr,type(arr))
brr=arr>10
print(brr)
arr=arr[arr>10]
print(arr)
arr=arr.reshape(4,1)
print(arr)
crr=arr.transpose()
print(crr,arr.shape,crr.shape)