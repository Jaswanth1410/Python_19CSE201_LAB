class triangle:
    def __init__(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
    def __bool__(self):
       return bool(((self.a == 45) and (self.b ==90) and (self.c == 45)) or ((self.a == 90) and (self.b ==45) and (self.c == 45)) or ((self.a == 45) and (self.b ==45) and (self.c == 90)))

t1 = triangle(45,45,90)
print(t1.__bool__())