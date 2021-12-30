

print("numbers divisible by 3 in the range 300 to 400")
for i in range(300,400):
    if (i % 3 == 0) :
     print(i)


# i = 300
# print("numbers divisible by 3 in the range 300 to 400")
# while i<400 :
#     t=i
#     sum = 0
#     while t > 0:
#      digit = t % 10
#      sum += digit
#      t //= 10
#      if (sum % 3 == 0):
#       print(i),
#     i+=1


# def getSum(num):
#     sum = 0
#     while num > 0:
#         sum += num % 10
#         num = num // 10
#     return sum
#
#
# x = range(300, 400)
# for n in x:
#     if (getSum(n) % 3 == 0):
#         print(n)
