# create random n x m matrix for copy/pasting into C as static array

import random

def main():

	n = int(input("Enter matix width: "))
	m = int(input("Enter matrix height: "))
	# low and high values are inclusive
	low = int(input("Enter min value: "))
	high = int(input("Enter max value: "))

	for i in range(m):

		print("{ ", end="")

		for j in range(n):
			if(j < n - 1):
				print(str(random.randint(low, high)) + ", ", end="")
			else:
				print(str(random.randint(low, high)), end="")

		if(i < m - 1):
			print(" },")
		else:
			print(" }")

main()