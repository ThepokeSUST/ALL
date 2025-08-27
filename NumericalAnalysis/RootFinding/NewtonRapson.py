import math
import sympy as sp
import random
import matplotlib.pyplot as plt


def fx(val,poly_expr):
    return float(poly_expr.subs(x, val))

def fpx(val,deri_expr):
    return float(deri_expr.subs(x, val))


listerror=[]
listitr=[]
def N_R(a,expr,deri_expr,tol=1e-6,itr=100):
      print("Newton Rapson method started")
      next_x=0
      error=0
      x=a
      nextx=0
      for i in range(itr):
             f_val = fx(x,poly_expr)
             f_deriv = fpx(x,deri_expr)
              
             if f_deriv == 0:
                  print("Derivative became 0. Newton-Raphson failed.")
                  return None,None,None

             next_x = x - (f_val / f_deriv)
             error=abs((next_x-x)/next_x)*100 if next_x!=0 else float('inf')
             listerror.append(error)
             listitr.append(i+1)
             if(error<=tol ):
                  return next_x,error,True
             x=next_x
      return next_x,error,False

# Input equation
poly_str = input("Enter equation f(x) (e.g., x^2 - 2*x - 20): ")
poly_str=poly_str.replace("^","**")
poly_expr = sp.sympify(poly_str)
x = sp.symbols('x')
# poly_expr = sp.sympify(poly_str)
deri_expr = sp.diff(poly_expr, x)

print("Give initial guess:")
a=float(input())
print("give custom error tolerance and iteration :Y/N")
chk=input()
root=0
error=0
check=False
if(chk=='y' or chk=="Y"):
    tol=float(input("give tolerance:"))
    iteration=int(input("give iteration number:"))
    root,error,check=N_R(a,poly_expr,deri_expr,tol,iteration)
else:
    root, error ,check= N_R(a,poly_expr,deri_expr)

if(check==True):
     print("Found root within specified tolerance ")
     print(f"root={root} error={error}")
else:
    print("Found root within specified tolerance ")
    print(f"root={root} error={error}")
    
print("Wanna see iteration vs Error visual representation? Y?N")
x=input()
if(x=='y' or x=='Y'):
        plt.figure(figsize=(8, 5))
        plt.plot(listerror, listitr, marker='o', linestyle='-', color='b', label='Error %')
        plt.title("Iteration vs Approximate Relative Error")
        plt.xlabel("Error(%)")
        plt.ylabel("Iteration")
        plt.grid(True)
        plt.legend()
        plt.show()    


