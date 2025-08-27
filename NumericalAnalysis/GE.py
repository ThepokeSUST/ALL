#Naive Gausian Elimination

import numpy as np;

def gausian(A,B,n):
   #forward elimination
    for col in range(n-1):
       if A[col][col]==0:
              raise ZeroDivisionError("Division by zero encoutered")
       for row in range(col+1,n):
          factor=A[row][col]/A[col][col]
          for i in range(n):
              A[row][i]-=A[col][i]*factor
          B[row]-=factor*B[col]

    #backward substitution      
    ans=np.zeros(n)
    for i in range(n-1,-1,-1):
       sumx=sum(A[i][j]*ans[j] for j in range(i+1,n))
       ans[i]=(B[i]-sumx)/A[i][i]
    return ans
       


n=int(input("Enter the number of variables: "))

print(f"Enter the augmented matrix (each row with {n+1} numbers,separated by space): ")
A=[]
B=[]
for i in range(n):
    row=list(map(float,input().split()))
    if len(row) != n+1:
        print("Error: wrong number of coefficients, please try again.")
        exit() 
    A.append(row[:-1])
    B.append(row[-1])
  
# print("which")  
solution=gausian(A,B,n)
print("Solution: ")
for i ,val in enumerate(solution):
       print(f"X{i+1}={val:.4f}")
