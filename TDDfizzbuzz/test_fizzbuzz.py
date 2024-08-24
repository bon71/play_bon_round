from fizzbuzz import FizzBuzz
import random

class TestFizzBuzz:
    def test_1を渡したら文字列1を返す(self):
        assert FizzBuzz.convert(1) == "1"

    def test_3の倍数のときは数の代わりにFizzに変換する(self):
        list3 = [1,2,3,4,6,7,8,9,11,12,13,14,16,17,18,19,21,22,23,24,26,27,28,29,31,32,33]
        random3 = 3 * random.choice(list3)
        assert FizzBuzz.convert(random3) == "Fizz"

    def test_5の倍数のときは数の代わりにBuzzに変換する(self):
        list5 = [1,2,4,5,7,8,10,11,13,14,16,17,19,20]
        random5 = 5 * random.choice(list5)
        assert FizzBuzz.convert(random5) == "Buzz"

    def test_3と5両方の倍数のときには数の代わりにFizzBuzzに変換する(self):
        random15 = 15 * random.randint(1,6)
        assert FizzBuzz.convert(random15) == "FizzBuzz"
    
    def test_100以上を与えるとFalseを返す(self):
        assert FizzBuzz.convert(100) == False