list1 = [4,5,6,8,9,2,6,2]
list2 = []
for i in list1:
    if i not in list2:
        list2.append(i)

print(list1,"\n",list2)