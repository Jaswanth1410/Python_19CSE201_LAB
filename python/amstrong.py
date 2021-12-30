


x = int(input("enter the number : "))
y = x
s = 0
while x>0:
    r = int(x%10)
    s += r**3
    x /= 10

if s == y:
    print(s,"is an armstrong Number ")
else:
    print(s,"is not an armstrong Number ")