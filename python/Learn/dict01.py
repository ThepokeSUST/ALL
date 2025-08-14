import copy

dict1={
    1:"one",
    2:"two",
    3:"three",
    "marks": {
        "phy":89,
        'chem':85
    }

    # a:"A"
}

print(dict1,type(dict1))

dict2=dict(aa="A",b="B",c='C')
print(dict2,type(dict2))

dict3=copy.copy(dict1)
dict4=copy.deepcopy(dict1)
print(dict1 ,dict3,dict4,sep="-----")
dict3[1]="oneone"
print(dict1 ,dict3,dict4,sep="\n")
dict3["marks"]["phy"]=95
print(dict1 ,dict3,dict4,sep="\n")

