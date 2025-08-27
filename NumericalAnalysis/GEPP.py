import numpy as np

def gaussian(A, B, n):
    # Forward Elimination
    for col in range(n - 1):
        # Pivot selection
        max_row = col
        for row in range(col + 1, n):
            if abs(A[row][col]) > abs(A[max_row][col]):
                max_row = row

        if A[max_row][col] == 0:
            raise ZeroDivisionError("Division by zero encountered.")

        # Swap rows
        A[col], A[max_row] = A[max_row], A[col]
        B[col], B[max_row] = B[max_row], B[col]

        # Elimination
        for row in range(col + 1, n):
            factor = A[row][col] / A[col][col]
            for i in range(n):
                A[row][i] -= A[col][i] * factor
            B[row] -= factor * B[col]

    # Backward Substitution
    ans = np.zeros(n)
    for i in range(n - 1, -1, -1):
        sumx = sum(A[i][j] * ans[j] for j in range(i + 1, n))
        ans[i] = (B[i] - sumx) / A[i][i]
    return ans



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

solution = gaussian(A, B, n)
print("Solution:")
for i, val in enumerate(solution):
        print(f"X{i + 1} = {val:.4f}")


