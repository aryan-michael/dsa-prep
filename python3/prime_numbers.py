def main():
	isPrime = True
	n = int(input("enter a number: "))

	if n <= 1:
		isPrime = False
	else:
		for i in range(2, n):
			if n % i == 0:
				print('not a prime number')
				isPrime = False
				break
	
	if isPrime == True:
		print('prime number')



main()
