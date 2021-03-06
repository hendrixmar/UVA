import sys
from math import *

def fact(n):
    temp = 1
    output = [1]
    for i in range(1,n+1):
        temp *= i
        output.append(temp)
    
    return output

def fact(n):
    temp = 1
    output = [1]
    for i in range(1,n+1):
        temp *= i
        
    
    return temp


def fac_cat(N):
    F = fact(N)
    
    temp = int((fact(N*2))/(F*F*(N+1)))

    return int(((2*N+2)*(2*N+1))/((N+1)*(N+2)))*temp



def cata(n):
    if (n == 0 or n == 1):
        return 1
 
    # Table to store results of subproblems
    catalan = [0 for i in range(n + 1)]
 
    # Initialize first two values in table
    catalan[0] = 1
    catalan[1] = 1
 
    # Fill entries in catalan[] using recursive formula
    for i in range(2, n + 1):
        catalan[i] = 0
        for j in range(i):
            catalan[i] = catalan[i] + catalan[j] * catalan[i-j-1]
 
    # Return last entry
    return catalan 


factorial = fact(301)
catalan = cata(301)

for i in sys.stdin:
    N = int(i)
    if (not N):
        break
    print(factorial[N]*catalan[N])
