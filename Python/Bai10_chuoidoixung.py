
def is_palindrome(string):
    return string == string[::-1]

print(is_palindrome("racecar"))  # True
print(is_palindrome("hello"))    # False
