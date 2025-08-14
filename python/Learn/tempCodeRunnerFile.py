r = np.array([1, 2, 3, 4])
# alias = arr  # another variable referencing the same array

# # This will raise an error because arr is still referenced by alias
# try:
#     arr.resize((2, 3))  # default refcheck=True
# except ValueError as e:
#     print("Error:", e)