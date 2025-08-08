



string = "dipok"

for i in string:
    print(i)
    if i == 'a':
       break 
if i=='d':
   print("this is outsider if")       
elif i=="o":
    print("this is outsider elif")   
else :
    print("no break state")

print(i)



for i in range (0,10,1):
    pass


li =[45,3423,23,3445]
for i,j in enumerate(li):
    print(i,j)

i=0
while i< len(li):
    print(li[i])
    i= i+1    