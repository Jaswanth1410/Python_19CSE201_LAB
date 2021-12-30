
import math

x = int(input("Enter point1 x : "))
y = int(input("Enter point1 y : "))
x1 = int(input("Enter point2 x : "))
y1 = int(input("Enter point2 y : "))

dis = math.sqrt(((x-x1)**2)+ ((y-y1)**2))

print("Euclidian distance = " + str(dis))

