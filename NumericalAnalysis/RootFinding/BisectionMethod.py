import math
import matplotlib.pyplot as plt

poly_str=None
listError=[]
iteration=[]
# Define the function to evaluate the polynomial

def f(x):
    try:
        return eval(poly_str, {"x": x, "math": math, "__builtins__": None})
    except Exception as e:
        print("Error in function evaluation:", e)
        return None

# Bisection method
def bisection_method(func, a, b, tol=1e-6, max_iter=10):
    # if func(a) * func(b) >= 0:
    #     print("Bisection method fails: f(a) and f(b) must have opposite signs.")
    #     return None, None
    count=0
    while(func(a)*func(b) >=0):
        count+=1
        print("given interval are not valid for bisection method")
        print("Choose such interval that gives opposite signs")
        if count%5==0:
            print("Two many attempt..")
            print("If you want i can show the visual representation of your expresion: Y/N")
            ch=input()
            if(ch=='y' or ch=="Y"):
                
                    x_values = [i / 10 for i in range(-100, 101)]  # from -10 to 10 with 0.1 steps
                    y_values = [f(x) for x in x_values]

# Plot
                    plt.figure(figsize=(8, 6))
                    plt.axhline(0, color='black', linewidth=1)  # X-axis
                    plt.axvline(0, color='black', linewidth=1)  # Y-axis
                    plt.plot(x_values, y_values, label=f"f(x) = {poly_str}")
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
    print("Your interval is valid for Bisection method ,Lets proceed")  
    preC=0
    C=0
    for i in range(max_iter):
        fa=func(a)
        fb=func(b)
        preC=C
        C = (a + b) / 2
        fc = func(C)
        
        # Approximate relative error
        if(i!=0):
            error = abs((C - preC) / C) * 100 if C != 0 else float('inf')
            listError.append(error)
            iteration.append(i)
        else:
            error=float('inf')
        
        if error <= tol :
            return C, error,True
        
        if fa * fc < 0:
            b = C
        else:
            a = C
    
    return C, error,False

# User inputs
print("\nBisection Method")

poly_str = input("Enter polynomial equation (e.g., x^3 - x - 20): ")
poly_str = poly_str.replace("^", "**")


a = float(input("Enter interval start a: "))
b = float(input("Enter interval end b: "))

# Run the method
print("give custom error tolerance and iteration :Y/N")
chk=input()
root=0
error=0
check=None
if(chk=='y' or chk=="Y"):
    tol=float(input("give tolerance:"))
    iteration=int(input("give iteration number:"))
    root,error,check=bisection_method(f,a,b,tol,iteration)
else:
    root, error,check= bisection_method(f, a, b)
    
if check is not False and root is not None:
    print("Ans: within your tolerance ")
    print(f"Root: {root:.6f}, Approximate error: {error:.6f}%")
    # print(iteration)
    # print(listError)
elif root is not None:
    print("Ans: out of your tolerance ")
    print(f"Root: {root:.6f}, Approximate error: {error:.6f}%")
else:
    print("Invalid")
    exit()
print("Wanna see iteration vs Error visual representation? Y?N")
x=input()
if(x=='y' or x=='Y'):
        plt.figure(figsize=(8, 5))
        plt.plot(listError, iteration, marker='o', linestyle='-', color='b', label='Error %')
        plt.title("Iteration vs Approximate Relative Error")
        plt.xlabel("Error(%)")
        plt.ylabel("Iteration")
        plt.grid(True)
        plt.legend()
        plt.show()

    
    