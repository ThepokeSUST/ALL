import array as arr

a=arr.array('i',[1,2,3,4,4])
print(a)

a.insert(1,0)
print(a)
a.append(999)
a.insert(5,2)
print(a)

a.remove(4)
print(a)
print(a.count(2))
a.reverse()
print(*a)

for i in range(0,len(a)):
    print(a[i],"",sep=" ",end="")


# b=arr.array("i",[[12,2,3],[8,9,0]])
# print(b)