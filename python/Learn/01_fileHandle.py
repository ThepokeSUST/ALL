file=None
try:
    file=open("testFile.txt")
except FileNotFoundError as fnf:
    print(fnf)
finally:
    print("this is finally block")
    if file!=None:
      print(file.mode,file.name,file.closed)
      content=file.read()
      print(content)
      file.close()
      print(file.closed)

try:
    with open("test2nd.txt") as file:
        print(file.name)
        content=file.read()
        print(content) 
        print(file.closed)
    print(file.name,file.closed)    
except FileNotFoundError as f:
    print(f)         
print("end of the program")
