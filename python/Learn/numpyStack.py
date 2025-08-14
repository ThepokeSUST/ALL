import numpy as np


arr= np.array([2,3,5,6])
brr=np.array([4,5,6,7])

crr=np.vstack((arr,brr))
print(crr)
print()
crr=np.hstack((arr,brr))
print(crr)
print()

crr=np.stack((arr,brr),axis=0)
print(crr)
print()

crr=np.stack((arr,brr),axis=1)
print(crr)
print()
