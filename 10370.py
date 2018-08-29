
T = int(input())

for j in range(T):

	grades = [int(i) for i in input().split()]
	grades.pop(0)
	size = len(grades)
	average = sum(grades)/size
	total = 0
	for i in grades:
		total += i >  average

	print(f'{(total/size)*100:.3f}%')
