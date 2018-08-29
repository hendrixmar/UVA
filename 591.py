from math import *

cont = 1
while(1):
    n = int(input())

    if n == 0:
        break

    array = [int(i) for i in input().split()]
    total = sum(array)//n

    result = 0

    for i in array:
        if i >= total:
            result += abs(total - i)
    print("Set #{}".format(cont))
    print("The minimum number of moves is {}.\n".format(result))
    cont += 1

