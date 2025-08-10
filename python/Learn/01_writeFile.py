
exist = False
file=None
try:
    file=open("forwrite.txt",'x')
except FileExistsError as f:
    print("file exist")
    exist=True
if not exist:
    print(file,type(file))
    file.write("dipoks")
    
try: 
    file=open("forwrite.txt",'a')
    file.write("dipus")
except FileNotFoundError as f:
    pass    

    