from functools import reduce
import operator
import itertools
print(operator.add(2,3))

a=[1,2,3,4,5,6.4,7,8,9,10]
b=reduce(operator.add,a)
print(type(b),b)

print(reduce(lambda x,y:x+y,a))

b2=list(itertools.accumulate(a,operator.add))
print(b2,type(b2))
