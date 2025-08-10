import os

cwd=os.getcwd()
print("current working directory ",cwd)

directory="Geeksforgeeks"
parent_dir="D:/new/python/learn"
path=os.path.join(parent_dir,directory)
print(path,type(path))
os.mkdir(path)

mode = os.stat("Os01.py").st_mode
print(oct(mode))