

for num in range(0,21):
    for i in range(2, int(num / 2)+1):
        if (num % i) == 0:
            print(num)
            break
else:
    print("Above all are Composite Numbers in range 0 to 20")