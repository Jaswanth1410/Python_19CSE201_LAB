x = int(input("Enter the 1 index :"))
y = int(input("Enter the last index :"))
odd = []
for i in range(x,y):
    num = str(i)
    f = 0
    for j in num:
      if int(j)%2==0:
          f = 1
          break;
    if f==0:
        odd.append(num)
print("Numbers With All its digits is Odd :")
print(",".join(odd))