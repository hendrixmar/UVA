import sys

def facto(N):
    temp = 1
    output = [1]
    for i in range(1,N+1):
        temp *= i
        output.append(temp)
    
    return output

def fact(a,b):
    temp = 1

    for i in range(a+1,b+1):
        temp *= i
    
    return temp



factorial = facto(100)

for i in sys.stdin:
    N,M = i.split()

    N = int(N)
    M = int(M)
    if N + M == 0:
        break

    A = fact(M,N)
    B = factorial[N-M]

    print("{} things taken {} at a time is {} exactly.".format(N,M,int(A/B)) )