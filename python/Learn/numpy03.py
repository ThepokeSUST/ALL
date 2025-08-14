import numpy as np

arr=np.array(((1,2,3,4),(5,6,7,8)))
print(arr)

b=arr>2
print(b)

c=arr[b].reshape(3,-1)
print(c)

arr=np.array([[1,2,3],[4,5,6]])
brr=arr[0]
print()
print(f"a is {arr} and b is {brr}")
print()
# With refcheck=False, both arr and alias get resized because they share the same memory.
try:
    arr.resize(3,2,refcheck=True)
except ValueError as ve:
    print(ve)    
print(arr)
print(brr)


arr = np.array([1, 2, 3, 4])
alias = arr  # another variable referencing the same array

# This will raise an error because arr is still referenced by alias
try:
    arr.resize((2, 3))  # default refcheck=True
except ValueError as e:
    print("Error:", e)