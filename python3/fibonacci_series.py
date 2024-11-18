# 0, 1, 1, 2, 3, 5, 8, 13, 21, ....
# n = (n-1) + (n-2)

def main():
	n = 10
	a = 0
	b = 1
	print(a)
	print(b)
	for i in range (0, n-2):
		nextNum = a + b
		print(nextNum)
		a = b
		b = nextNum

main()
