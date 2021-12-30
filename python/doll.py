x,y = 0,0
q = input("Enter order : ")
for r in q:
    if r == "U" or r == "u": y += 1
    elif r == "R" or r == "r": x += 1
    elif r == "L" or r == "l": x -= 1
    elif r == "D" or r == "d": y -= 1
print("(",x,",",y,")")