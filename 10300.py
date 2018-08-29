import sys

n = int(input())

for i in range(n):
    T = int(input())
    total = 0
    for line in sys.stdin:
        T -= 1
        a,b,c = line.split()
        a = int(a)
        c = int(c)
        total += a*c
        if 0 == T:
            break
        
    
    print(total)
        

