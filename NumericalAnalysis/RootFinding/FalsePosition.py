import math
import matplotlib.pyplot as plt

listiteration=[]
listerror=[]
def func(x, expr):
    try:
        return eval(expr, {"x": x, "math": math})
    except Exception as e:
        raise ValueError(f"Error evaluating function: {e}")

def false_pos(a, b,  expr,t=1e-6, max_iter=100):
    fa = func(a, expr)
    fb = func(b, expr)
      

    count=0
    while(func(a,expr)*func(b,expr) >=0):
        count+=1
        print("given interval are not valid for bisection method")
        print("Choose such interval that gives opposite signs")
        if count%5==0:
            print("Two many attempt..")
            print("If you want i can show the visual representation of your expresion: Y/N")
            ch=input()
            if(ch=='y' or ch=="Y"):
                
                    x_values = [i / 10 for i in range(-100, 101)]  # from -10 to 10 with 0.1 steps
                    y_values = [func(x,expr) for x in x_values]

# Plot
                    plt.figure(figsize=(8, 6))
                    plt.axhline(0, color='black', linewidth=1)  # X-axis
                    plt.axvline(0, color='black', linewidth=1)  # Y-axis
                    plt.plot(x_values, y_values, label=f"f(x) = {expr}")
                    plt.xlabel("x")
                    plt.ylabel("f(x)")
                    plt.title("Polynomial Function Graph")
                    plt.legend()
                    plt.grid(True)
                    plt.show()
                    print("Try again? Y/N")
                    chk=input()
                    if(chk=='N' or chk=='n'):
                      exit()
            else:
                print("Want to exit? Y/N")
                ch=input()
                if(ch=='y' or ch=='Y'):
                   return None,None,None
        a = float(input("Enter interval start a: "))
        b = float(input("Enter interval end b: "))       
    
    print("Now your interal is valid . lets proceed")
    
    preC=0
    C=0
    error = float('inf')
    for i in range(max_iter):
        preC=C
        fa = func(a, expr)
        fb = func(b, expr)
        C = (a * fb - b * fa) / (fb - fa)
        fc = func(C, expr)
        if(i!=0):
        #    error=abs((C-preC)/C)*100 if C!=0 else float('inf')
           error = abs((C - preC) / C) * 100 if C != 0 else float('inf')
           listiteration.append(i+1)
           listerror.append(error)

        if error <= t:
            return C,error,True

        if fa * fc < 0:
            b = C
        else:
            a = C

    # print("Exceeded maximum iterations. Root not found within tolerance.")
    return C,error,False

# ---- INPUT SECTION ----

expr = input("Enter the function f(x): ") 
expr=expr.replace("^",'**')
a = float(input("Enter a: "))
b = float(input("Enter b: "))


print("give custom error tolerance and iteration :Y/N")
chk=input()
root=0
error=0
if(chk=='y' or chk=="Y"):
    tol=float(input("give tolerance:"))
    iteration=int(input("give iteration number:"))
    root,error,check=false_pos(a,b,expr,tol,iteration)
else:
    root, error ,check= false_pos(a,b,expr)
   
if(check==False):
    print("Not found within specified tolarence")
    print(f"root is {root}  error={error}")
else:
    print(f"found within tolarence")
    print(f"root={root}")
print("Wanna see iteration vs Error visual representation? Y?N")
x=input()
if(x=='y' or x=='Y'):
        plt.figure(figsize=(8, 5))
        plt.plot(listerror, listiteration, marker='o', linestyle='-', color='b', label='Error %')
        plt.title("Iteration vs Approximate Relative Error")
        plt.xlabel("Error(%)")
        plt.ylabel("Iteration")
        plt.grid(True)
        plt.legend()
        plt.show()    
