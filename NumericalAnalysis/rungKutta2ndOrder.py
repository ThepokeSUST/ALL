def f(expr,x_val,y_val):
    return float(eval(expr,{"x:":x_val,"y":y_val}))

def heuns(x0,y0,expr,target_x,h):
    x=x0
    y=y0
    a2=1/2#heuns method
    #mid a2=1 
    #a2=2/3
    a1=1-(a2)
    p1=0.5/a2
    q11=0.5/a2
    while x<target_x:
        k1=f(expr,x,y)
        k2=f(expr,x+p1*h,y+q11*h*k1)
        y=y+(a1*k1+a2*k2)*h
        x=x+h 
    return y

def main():
    eq=input("dif euqtion:")
    x0=float(input("inital x0 "))
    y0=float(input("initial y0: "))
    h=float(input("step size "))
    target_x=float(input("target x: "))
    eq=eq.replace("^","**")
    expr=eq
    print(round(heuns(x0,y0,expr,target_x,h),2))
if __name__=="__main__":
    main()