import sys


def fizzbuzz(number):
	return number


if __name__ == "__main__":
	for i in range(1, int(sys.argv[1])+1):
		print(fizzbuzz(i))
