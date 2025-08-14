

set1={1,2,3,4}
set2={3,5,6,7}
print(set1,set2)

# set3=set1+set2
# print(set3)

list1=[1,23,4]
list2=[3,4]
list3=list1+list2
print(list3)

set3=set1.union(set2)
print(set3)
set3.remove(1)
print(set1,set2,set3)
set4=set1.union()
set1.remove(1)
print(set1,set4)

set5=set1|set2
print(set5)