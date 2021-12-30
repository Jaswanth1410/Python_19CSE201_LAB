from collections import Counter
D1 = Counter({'a': 1, 'b': 2, 'c': 3})
D2 = Counter({'a': 3, 'b': 2, 'd': 4})
D3 = dict(D1+D2)
print(D3)

d1 = {'a': 1, 'b': 2, 'c': 3}

d2 = {'a': 3, 'b': 2, 'd': 4}

d3 = {}

for i in d1.keys():

    for j in d2.keys():

        if i == j:
            d3[i] = d1[i] + d2[i]

    if i not in d2.keys():
        d3[i] = d1[i]

for i in d2.keys():

    if i not in d1.keys():
        d3[i] = d2[i]

print(d3)