import sys

fibo = [0,1]

for i in range(2, 5001):
    fibo.append(fibo[i-1] + fibo[i-2])

for line in sys.stdin:
    a = int(line)
    
    print("The Fibonacci number for {} is {}".format(a,fibo[a]))