x = input("Enter the str1 :")
s1,s2 = "",""
i = 0
while(i < len(x)):
     c = x[i];
     if c.isalnum() or c == " ":
         s1 += c
     else:
         s2 += c
     i+=1
print(s1+s2)