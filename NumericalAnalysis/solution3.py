import numpy as np

# Naive Gaussian Elimination (without pivoting)
def gaussian(A, B, n):
    # Convert lists to float arrays for accurate division
    A = A.astype(float)
    B = B.astype(float)

    # ---------- Forward Elimination ----------
    for col in range(n-1):
        # Check for zero pivot (diagonal element)
        if A[col][col] == 0:
            raise ZeroDivisionError("Division by zero encountered in naive Gaussian.")
        
        # Eliminate entries below the pivot
        for row in range(col+1, n):
            factor = A[row][col] / A[col][col]  # Multiplier for the row
            # Subtract factor * pivot row from current row
            A[row, col:] -= factor * A[col, col:]
            B[row] -= factor * B[col]

    # ---------- Backward Substitution ----------
    ans = np.zeros(n)
    for i in range(n-1, -1, -1):  # Start from last row
        # Compute sum of known variables
        sumx = np.dot(A[i, i+1:], ans[i+1:])
        # Calculate the value of variable
        ans[i] = (B[i] - sumx) / A[i][i]
    return ans


# Gaussian Elimination with Partial Pivoting
def gaussianpp(A, B, n):
    A = A.astype(float)
    B = B.astype(float)

    # ---------- Forward Elimination with Pivoting ----------
    for col in range(n-1):
        # Find the row with the maximum absolute value in the current column (for stability)
        max_row = np.argmax(np.abs(A[col:, col])) + col
        
        # Check if pivot is zero after pivoting (singular matrix case)
        if A[max_row][col] == 0:
            raise ZeroDivisionError("Division by zero encountered after pivoting.")

        # Swap rows in both A (coefficient matrix) and B (constants)
        if max_row != col:
            A[[col, max_row]] = A[[max_row, col]]
            B[[col, max_row]] = B[[max_row, col]]

        # Eliminate entries below the pivot
        for row in range(col+1, n):
            factor = A[row][col] / A[col][col]
            A[row, col:] -= factor * A[col, col:]  # Update row
            B[row] -= factor * B[col]

    # ---------- Backward Substitution ----------
    ans = np.zeros(n)
    for i in range(n-1, -1, -1):  # Start from last equation
        sumx = np.dot(A[i, i+1:], ans[i+1:])  # Calculate sum of already known variables
        ans[i] = (B[i] - sumx) / A[i][i]  # Solve for current variable
    return ans


# ---------- Main Program ----------
n = int(input("Enter the number of variables: "))
print(f"Enter the augmented matrix (each row with {n+1} numbers, separated by space): ")

# Read matrix A and vector B
A = []
B = []
for i in range(n):
    row = list(map(float, input().split()))
    if len(row) != n + 1:
        print("Error: wrong number of coefficients, please try again.")
        exit()
    A.append(row[:-1])  # First n elements -> Coefficient matrix
    B.append(row[-1])   # Last element -> Constant term

A = np.array(A)
B = np.array(B)

# Ask user for method
print("Which method do you want to use?")
print("1. Naive Gaussian (No pivoting)")
print("2. Gaussian with Partial Pivoting")
ch = int(input("Enter choice: "))

# Solve using chosen method
if ch == 2:
    solution = gaussianpp(A, B, n)
else:
    solution = gaussian(A, B, n)

# Display solution
print("\nSolution:")
for i, val in enumerate(solution):
    print(f"X{i+1} = {val:.4f}")
