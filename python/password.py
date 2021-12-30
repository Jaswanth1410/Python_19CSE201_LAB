
passwd = input("Enter the str1 :")
SpecialSym = ['$', '@', '#', '%']
if len(passwd) >=6:
    if (char.isdigit() for char in passwd):
        if (char.isupper() for char in passwd):
            if (char.islower() for char in passwd):
                if (char in SpecialSym for char in passwd):
                    print("true")


else: print("false")