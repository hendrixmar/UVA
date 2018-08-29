import sys


def bubbleSort(alist):
    cont = 0
    size = len(alist)
    for i in range(size):
        o = alist.index(i+1)

        cont += abs(i-o)
        alist.pop(o)
        alist.insert(i,i+1)



    return cont

size = int(input())
for i in range(size):
    input()
    array = [int(i) for i in input().split()]



    print("Optimal train swapping takes {} swaps.".format(bubbleSort(array)))
