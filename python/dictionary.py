

dict={
    "name":"dipok",
    "dept":"cse",
    "reg":2022331055,
    "Graduated":False,
    12:"baro",
    True:4,
    True:5,
    "subject":["math","phy","chem","bio"],
    "friend":{"ok":0,
              "ko":90},
    "friends":("ok",90),
    "t1":(9),
    "t2":(9.0)

}
print(dict)
print(type(dict))
print( )
print(dict["subject"],type(dict["subject"]))
print(type(dict["friends"]),type(dict["friends"]))
print(dict["friend"],type(dict["friend"]))
print()
print(dict["friend"]["ko"],type(dict["friend"]["ko"]))
dict["friend"]['ok']=80
print(dict["friend"])

dict["subject"][0]="no math"
print(dict["subject"])

# dict["friends"][0]="ko"