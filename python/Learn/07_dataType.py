

#List data
List = [1,2,3,4,5]
print(List)
List[0]=999
print(List)

#tuple data

Tup=(1,2,3,4,5)
print(Tup)
# Tup[0]=999#not allowed
# print(Tup) 

Set= set("Dipok")
print(Set)
# print(Set[0])
Set.add(6)
print(Set)
Set.add("dipu")
print(Set)



tupdic =(1,2,3,4)
listdic = [1,2,3,4,5]
setdic= set()
nestdic={
    1:'a',
    2:'b'
}
dictn = {

    1: "A",
    2: "B",
    "1":[1,2,3],
    "2":(1,2,3,4),
    tupdic: "Tuple",
    # listdic: "List", #not allowed
    # setdic:"Set", #not allowed 

    # nestdic : "dictionary, #also not allowed
}
print(type(dictn),dictn)
print(type(dictn[1]),dictn[1])
print(type(dictn["1"]),dictn["1"])
print(type(dictn["2"]),dictn["2"])
dictn["1"][0]=999;
print(type(dictn["1"]),dictn["1"])
# int =10;
# print(type(int),int)
# a=int(3)
