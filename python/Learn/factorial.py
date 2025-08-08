


def _1factorial(n):
      
      if(n==0 or n==1):
         return 1
      return n*_1factorial(n-1)
#tail recursion
def _2factorial(n,accumulator=1):
     if(n==0):
         return accumulator
     return _2factorial( n-1, accumulator*n )     

a=int(input("enetr any number:"))
print(_1factorial(a),_2factorial(a))