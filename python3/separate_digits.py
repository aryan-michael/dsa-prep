def main():
	total = 0
	product = 1
	number = 12345
	digits = []
	while number > 0:
		digits.append(number%10)
		number = number // 10	
	digits.reverse()
	print(digits)
	
	for digit in digits:
		total = total + digit
		product = product * digit
	print("product minus total is", product-total)
main()
