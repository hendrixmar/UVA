import sys
from math import *



for line in sys.stdin:
    
    for i in line:
        
        if(ord(i) == 10):
            print('\n',end='')
        else:
            print("%c" % (chr(ord(i)-7)),end="")

  





        

        
    