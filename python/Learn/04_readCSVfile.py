# Book1.csv  file name
import csv
try:
    file=open("Book1.csv")
    # print(file.read())
    print(".................")
    csvreader=csv.reader(file)
    print("type of csvreader ", type(csvreader),file.tell())
    for row in csvreader:
        print(row)
    print("file tell ",file.tell())    
    print("...................")    
    file.seek(0)    
    for row in csvreader:
        print(row) 
        # file.seek(0)
    file.seek(0)
    csvreader=list(csv.reader(file))
    print(type(csvreader))
    print("................")    
    for ele in csvreader:
        print(ele)
    print()
    for ele in csvreader:
        print(ele)    
except FileNotFoundError as f:
    print(f)    