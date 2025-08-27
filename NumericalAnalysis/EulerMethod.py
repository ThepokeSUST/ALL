import sympy as sp

# Take equation from user and replace ^ with **
eq_str = input("Enter polynomial equation for dy/dx = f(x, y) (e.g., x - y^2): ")
eq_str = eq_str.replace("^", "**")

# Define symbols
x, y = sp.symbols('x y')

# Convert string to sympy expression
expr = sp.sympify(eq_str)

# Function for f(x,y)
def f(val_x, val_y):
    return float(expr.subs({x: val_x, y: val_y}))

# Euler method
def euler_method(x0, y0, x_target, h):
    x_val = x0
    y_val = y0
    print("\nStep\t x\t y")
    print(f"0\t {x_val:.4f}\t {y_val:.4f}")
    step = 1
    while x_val < x_target:
        y_val = y_val + h * f(x_val, y_val)
        x_val = x_val + h
        print(f"{step}\t {x_val:.4f}\t {y_val:.4f}")
        step += 1
    return y_val

# User inputs
x0 = float(input("Enter initial x (x0): "))
y0 = float(input("Enter initial y (y0): "))
x_target = float(input("Enter target x: "))
h = float(input("Enter step size (h): "))

# Compute result
result = euler_method(x0, y0, x_target, h)
print(f"\nApproximate solution at x = {x_target} is y = {result:.6f}")
