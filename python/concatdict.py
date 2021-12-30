D1= {1: 'aa', 2: 'ba', 3: 'cc'}
D2={4: 'xx', 5: 'yy', 6: 'zz'}
D3=D1
for key, value in D2.items():
    D3[key] = value
print(D1)