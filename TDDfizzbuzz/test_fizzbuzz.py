# coding:utf-8

import unittest
import fizzbuzz as fb


class FizzBuzzTest(unittest.TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def test_normal(self):
        self.assertEqual(1, fb.fizzbuzz(1))

    def test_fizz(self):
        self.assertEqual("Fizz", fb.fizzbuzz(3))

    def test_buzz(self):
        self.assertEqual("Buzz", fb.fizzbuzz(5))

    def test_fizzbuzz(self):
        self.assertEqual("FizzBuzz", fb.fizzbuzz(15))


if __name__ == "__main__":
    unittest.main()
