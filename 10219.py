import sys

 


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

catalan = cata(1000)

def binomialCoefficient(n, k):
 
    # since C(n, k) = C(n, n - k)
    if (k > n - k):
        k = n - k
 
    # initialize result
    res = 1
 
    # Calculate value of [n * (n-1) *---* (n-k + 1)]
    # / [k * (k-1) *----* 1]
    for i in range(k):
        res = res * (n - i)
        res = res / (i + 1)
    return len(str(res))
 
# A Binomial coefficient based function to
# find nth catalan number in O(n) time

def cont(N):
    temp = 0
    for i in N:
            temp +=int(i)
    return temp



for i in sys.stdin:

    n,m = i.split()

    n = int(n)
    m = int(m)
    
    
    print( binomialCoefficient(n,m)   )

