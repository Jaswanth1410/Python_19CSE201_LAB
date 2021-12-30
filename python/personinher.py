class person:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def dis_person(self):
        print("Name : ",self.name,"\nage : ",self.age)
class Teacher(person):
    def __init__(self, name, age,experience,research_area):
        super().__init__(name,age)
        self.experience = experience
        self.research_area = research_area
    def dis_teacher(self):
        print("Name : ",self.name,"\nage : ",self.age,"\nexperience : ",self.experience,"\nresearch_area : ",self.research_area)
class Student(person):
    def __init__(self,name, age,course,marks):
        person.__init__(self, name, age)
        self.course =course
        self.marks =marks
    def dis_student(self):
        print("Name : ",self.name,"\nage : ",self.age,"\ncourse : ",self.course,"\nmarks : ",self.marks)

p = person("king",50)
p.dis_person()
print("----------------")
t = Teacher("kiran",32,"2years","ML")
t.dis_teacher()
print("----------------")
s =Student("Kishore",19,"CSE",96)
s.dis_student()
