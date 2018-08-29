import sys
from math import *


size = input()
size = int(size)
for i in range(size):
    a = input()
    b = input()

    a = int(a)
    b = int(b)
    total = 0
    for v in range(a,b+1):
        if(v & 1):
            total += v

    print("Case {}: {}".format(i+1,total))
    

  





        

        
    