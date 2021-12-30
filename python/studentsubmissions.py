class studentadmitted:
    no_of_stud = 0
    r = 101
    id = []
    def __init__(self,name):
        self.stud_name = name
        self.stud_id = studentadmitted.r
        studentadmitted.id.append(self.stud_id)
        studentadmitted.no_of_stud += 1
        studentadmitted.r += 1
    @classmethod
    def student_details(cls):
        print("No_of_students : ",cls.no_of_stud)
        print("List of Student_ids: ")
        for i in cls.id:
            print(i)

s1 = studentadmitted("kiran")
s2 = studentadmitted("hello")
s3 = studentadmitted("hi")
s4 = studentadmitted("king")
s5 = studentadmitted("krishna")
s6 = studentadmitted("jayadev")


studentadmitted.student_details()

