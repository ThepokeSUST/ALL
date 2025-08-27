import numpy as np

def lu_decomposition(A):
    n = A.shape[0]
    L = np.eye(n)  
    U = A.copy() 

    for k in range(n-1):
        for i in range(k+1,n):
            factor = U[i][k] / U[k][k]
            L[i, k] = factor
            U[i, k:] = U[i, k:] - factor * U[k][k:]
    return L, U

def forward_substitution(L, b):   # Solves Ly = b for y using forward substitution.
    n = L.shape[0]
    y = np.zeros(n)
    for i in range(n):
        sum_val = sum(L[i, j] * y[j] for j in range(i))
        y[i] = (b[i] - sum_val) / L[i, i]
    return y

def backward_substitution(U, y):   # Solves Ux = y for x using backward substitution.
    n = U.shape[0]
    x = np.zeros(n)
    for i in range(n - 1, -1, -1):
        sum_val = sum(U[i, j] * x[j] for j in range(i + 1, n))
        x[i] = (y[i] - sum_val) / U[i, i]
    return x

def solve_lu(A, b):
    """
    Solves Ax = b using LU decomposition.
    """
    L, U = lu_decomposition(A)
    y = forward_substitution(L, b)
    x = backward_substitution(U, y)
    return x

# inverse using LU
def inverse_lu(A):
    n = A.shape[0]
    I = np.eye(n)
    inv_A = np.zeros_like(A)
    for i in range(n):
        b = I[:, i]
        x = solve_lu(A, b)
        inv_A[:, i] = x
    return inv_A

#  determinant from U
def determinant_from_u(U):
    return np.prod(np.diag(U))

def main():
    n = int(input("Enter the number of variables: "))
    print(f"Enter the augmented matrix (each row with {n+1} numbers, separated by space):")
    A = []
    B = []
    for i in range(n):
        row = list(map(float, input().split()))
        if len(row) != n + 1:
            print("Error: wrong number of coefficients, please try again.")
            exit()
        A.append(row[:-1])
        B.append(row[-1])

    A = np.array(A)
    B = np.array(B)

    #Perform LU decomposition
    L, U = lu_decomposition(A)

    print("\nLower triangular matrix L:")
    print(L)

    print("\nUpper triangular matrix U:")
    print(U)

    # Compute inverse
    inv_A = inverse_lu(A)
    print("\nInverse of matrix A:")
    print(inv_A)

    #Compute determinant
    det_A = determinant_from_u(U)
    print("\nDeterminant of matrix A:")
    print(det_A)

if __name__ == "__main__":
    main()