
set1={1,2,3,4,5}
print(set1,type(set1))
set1.add(3)
set1.add(89)
print(set1)
set1.update([-1,-2,-3])
# set1.add(9,0)
set1.update((55,44,33,22,11))
print(set1)

set1.remove(5)
print(set1)
print(set1.pop())
print(set1)

set1.clear()
print(set1)

try:
    set1.pop()
except KeyError as k:
    print(k)    