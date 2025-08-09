
try:
   with open("testFile.txt") as file:
      content= file.read(10)
      print(content)
except FileNotFoundError as f:
   print(f)      
