class FizzBuzz:
	def convert(num:int) -> str | bool:
		if num >= 100:
			return False

		result = str(num)
		if num % 15 == 0:
			result = 'FizzBuzz'
		elif num % 3 == 0:
			result = 'Fizz'
		elif num % 5 == 0:
			result = 'Buzz'
		return result