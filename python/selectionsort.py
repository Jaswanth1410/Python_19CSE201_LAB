l = [5,9,3,7,8]
i= 0
while i<len(l):
    p = l.index(min(l[i:len(l)]))
    l[i],l[p] = l[p],l[i]
    i += 1
print(l)