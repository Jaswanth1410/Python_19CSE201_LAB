# from abc import abstractmethod
#
#
# class Polygon:
#     @abstractmethod
#     def getdetails(self):
#         pass
#     @abstractmethod
#     def surfacearea(self):
#         pass
#
# class Rectangle(Polygon):
#     def __init__(self,L,B):
#         self.getdetails(L,B)
#         self.surfacearea()
#     def getdetails(self,L,B):
#         self.L = L
#         self.B = B
#     def surfacearea(self):
#         self.surface_area = self.L*self.B
#         print("Surface Area : ",self.surface_area)
#
# class Square(Polygon):
#     def __init__(self,S):
#         self.getdetails(S)
#         self.surfacearea()
#     def getdetails(self,s):
#         self.S = s
#     def surfacearea(self):
#         self.surface_area = self.S**2
#         print("Surface Area : ", self.surface_area)
#
# class Triangle(Polygon):
#     def __init__(self,H,B):
#         self.getdetails(H,B)
#         self.surfacearea()
#     def getdetails(self,H,B):
#         self.H = H
#         self.B = B
#     def surfacearea(self):
#         self.surface_area = self.H*self.B*0.5
#         print("Surface Area : ", self.surface_area)
#
# r = Rectangle(8,9)
# t = Triangle(9,4)
# s = Square(4)
class Player:

    def __init__(self, name, age, ht, wt):
        self.name = name
        self.age = age
        self.height = ht
        self.weight = wt

    def get_age(self):
        return self.age

    def get_height(self):
        return self.height

    def get_weight(self):
        return self.weight


p1 = Player("xxx", 22, 5.8, 70)
print(p1.get_age())
print(p1.get_height())
print(p1.get_weight())