



try:
    with open("forlinebyline.txt") as file:
        print(file.name,file.mode)
        for item in file:
            print(item.strip())
except FileNotFoundError as f:
    print(f)            

print("''''''''''''''''''")
try:
    with open("forlinebyline.txt") as file:
        line=file.readline()
        while line:
            print(line.strip())
            line=file.readline()
except FileNotFoundError as f:
    print(f)           
