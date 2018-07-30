import sys

def fibo():

    output = [0,1]

    i = 2
    while(1):
        output.append(output[i-1]+output[i-2])
        if(i >= 1020):
            break
        i += 1
    
    return output

F = fibo()
for i in sys.stdin:

    a = int(i)

    print(F[a+2])
