# import numpy as np
# import matplotlib.pyplot as plt


# f=2/5
# print(f)
# f=2//5
# print(f)
# # Define x values
# x = np.linspace(-10, 10, 400)  # 400 points from -10 to 10
# y = x**2  # Function y = x^2

# # Plot
# plt.plot(x, y, label="y = x²")
# plt.title("Graph of y = x²")
# plt.xlabel("x")
# plt.ylabel("y")
# plt.grid(True)
# plt.legend()
# plt.show()




# import math
# import sympy as sp
# import random

# # Input equation
# poly_str = input("Enter equation f(x) (e.g., x^2 - 2*x - 20): ")

# x = sp.symbols('x')
# poly_expr = sp.sympify(poly_str)
# derivative_expr = sp.diff(poly_expr, x)
# print(poly_str)
# print(derivative_expr)
# print(poly_expr)





A=[1,2,3,4,5]
print(A[:-1])
print(A[-5:])