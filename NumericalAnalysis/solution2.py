import numpy as np

def gaussian(A, B, n):
    A = A.astype(float)  # Ensure float for division
    B = B.astype(float)

    # Forward elimination
    for col in range(n-1):
        if A[col][col] == 0:
            raise ZeroDivisionError("Division by zero encountered in naive Gaussian.")
        for row in range(col+1, n):
            factor = A[row][col] / A[col][col]
            A[row, col:] -= factor * A[col, col:]
            B[row] -= factor * B[col]

    # Backward substitution
    ans = np.zeros(n)
    for i in range(n-1, -1, -1):
        sumx = np.dot(A[i, i+1:], ans[i+1:])
        ans[i] = (B[i] - sumx) / A[i][i]
    return ans


def gaussianpp(A, B, n):
    A = A.astype(float)
    B = B.astype(float)

    # Forward elimination with partial pivoting
    for col in range(n-1):
        # Pivot selection
        max_row = np.argmax(np.abs(A[col:, col])) + col
        if A[max_row][col] == 0:
            raise ZeroDivisionError("Division by zero encountered after pivoting.")

        # Swap rows
        if max_row != col:
            A[[col, max_row]] = A[[max_row, col]]
            B[[col, max_row]] = B[[max_row, col]]

        # Elimination
        for row in range(col+1, n):
            factor = A[row][col] / A[col][col]
            A[row, col:] -= factor * A[col, col:]
            B[row] -= factor * B[col]

    # Backward substitution
    ans = np.zeros(n)
    for i in range(n-1, -1, -1):
        sumx = np.dot(A[i, i+1:], ans[i+1:])
        ans[i] = (B[i] - sumx) / A[i][i]
    return ans


# Main program
n = int(input("Enter the number of variables: "))
print(f"Enter the augmented matrix (each row with {n+1} numbers, separated by space): ")

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

print("Which method do you want to use?")
print("1. Naive Gaussian")
print("2. Gaussian with Partial Pivoting")
ch = int(input("Enter choice: "))

if ch == 2:
    solution = gaussianpp(A, B, n)
elif ch==1:
    solution = gaussian(A, B, n)
else:
    print("invalid option")
    exit()
print("Solution:")
for i, val in enumerate(solution):
    print(f"X{i+1} = {val:.4f}")
