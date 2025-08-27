import math
import matplotlib.pyplot as plt
poly_str = input("Enter polynomial equation (e.g., x^3 - x - 20): ")
poly_str = poly_str.replace("^", "**")

# Define the function to evaluate the polynomial
def f(x):
    try:
        return eval(poly_str, {"x": x, "math": math, "__builtins__": None})
    except Exception as e:
        print("Error in function evaluation:", e)
        return None
listError=[]
iteration=[]

def secant(f,a,b,tol=1e-6,itr=50):
     pre_x=a
     prv_x=b
     error=None

     for i in range(itr):
          next_x=pre_x- (f(pre_x)*(pre_x-prv_x)) / (f(pre_x)-f(prv_x))
          error=(abs(next_x-pre_x)/next_x)*100 if next_x!=0 else float('inf')
          listError.append(error)
          iteration.append(i+1)
          if(error <= tol):
              return next_x,error,True        
          prv_x=pre_x
          pre_x=next_x
     return pre_x,error,False      

print("\nSecant Method")
a = float(input("Enter first assume value: "))
b = float(input("Enter second assume value: "))



print("give custom error tolerance and iteration :Y/N")
chk=input()
root=0
error=0
if(chk=='y' or chk=="Y"):
    tol=float(input("give tolerance:"))
    itr=int(input("give iteration number:"))
    root,error,check=secant(f,a,b,tol,itr)
else:
    root, error,check = secant(f, a, b)

if(check==False and root!=None):
    print(f"Root found but not within specified tolerance: root={root} and error={error}")
elif(check==True and root!=None):
    print(f"Root found  within specified tolerance: root={root} and error={error}")
else :
    print("root not found")    

if(root!=None):
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

