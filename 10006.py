import sys

from math import *


carmichael = [561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973,75361]



def fermat_checking(N):
    a = randint(2, N-1)
    
    
    for i in range(20):
        if (a**N % N) != a:
            return False
    return True

for i in sys.stdin:

    N = int(i)
    if(N == 0):
        break 

    if N in carmichael:
        print("The number {} is a Carmichael number.".format(N))
    else:
        print("{} is normal.".format(N))
    
