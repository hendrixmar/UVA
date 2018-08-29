import sys


keyboard = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"

for line in sys.stdin:


	for i in line:
		if not i.isspace():
			o = keyboard.find(i)
			print(keyboard[o-1],end="")
		else:
			if i != '\n':
				print(' ',end="")

	print()

