from math import *
import sys

def fibo():

    output = [1,2]
    T = 10**100
    i = 2
    while(1):
        output.append(output[i-1]+output[i-2])
        if(T <= output[i]):
            break
        i += 1
    
    return output


fibonacci = fibo()


def limita(num, array):
    
    
    a = 0 
    b = len(array)
    found = False
    T = ceil(log(b,2))
    
    if num in array:
        return array.index(num)
    if num == 0:
        return 0

    for i in range(T):
        
        I = (a+b)//2

        if num == array[I]:
            index = I
            break
   
    

        elif num < array[I] and array[I - 1] < num:

            index = I 
                
            break

        elif array[I] < num and num < array[I + 1]:

            index = I + 1

            break

     
        elif num < array[I]:
            b = I
  
        else:
            a = I

    return index


def limitb(num, array):
    
    
    a = 0 
    b = len(array)
    found = False
    T = ceil(log(b,2))
    
    if num in array:
        return array.index(num)
    if num == 0:
        return 0

    for i in range(T):
        
        I = (a+b)//2

        if num == array[I]:
            index = I
            break
   
    

        elif num < array[I] and array[I - 1] < num:

            index = I - 1
                
            break

        elif array[I] < num and num < array[I + 1]:

            index = I

            break

     
        elif num < array[I]:
            b = I
  
        else:
            a = I

    return index


for i in sys.stdin:
    a,b = i.split()

    a = int(a)
    b = int(b)

    if not(a + b):
        break

    
    at = limita(a,fibonacci)
    bt = limitb(b,fibonacci)
    if bt < at:
        print(0)
    else:
        print(abs(bt-at)+1)
    

    