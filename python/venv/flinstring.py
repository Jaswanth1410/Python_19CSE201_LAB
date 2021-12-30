list = input().split()
c = 0
for i in list:
    if len(i)>1 and i[0] == i[-1] :
        c+=1
print(c)