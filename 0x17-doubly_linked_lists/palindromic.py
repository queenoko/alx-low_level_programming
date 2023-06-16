#!/usr/bin/python3
max_num1 = float("-inf")


def is_palindrome(digit):
    digit = str(digit)  # converts the number to a string
    reversed_num = digit[::-1]  # Reverse string using slicing
    return digit == reversed_num


for y in range(100, 1000):
    for z in range(100, 1000):
        temp_p = y * z
        if (is_palindrome(temp_p)):
            if (max_num1 < temp_p):
                max_num1 = temp_p
print(max_num1)
