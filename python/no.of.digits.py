
def no_of_digits(num):
    if(num <= 0):
        return 0
    return 1 + no_of_digits(num//10)

print(no_of_digits(1589764))