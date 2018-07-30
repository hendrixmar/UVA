print(1)
print(*[1,1])

top = 10**60

pascal = [1,1]
C = 1
stop = 0

while(1):
    T = [1]
    for i in range(C):
        temp = (pascal[i]+pascal[i+1] )

        if top <= temp:
            stop = 1


        T.append(temp)    

    T.append(1)
    C += 1
    print(*T)

    pascal = T

    if(stop):
        break
