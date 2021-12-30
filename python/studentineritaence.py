class student:
    def __init__(self,st_name,id):
        self.st_name = st_name
        self.st_id = id
        print("name: ", self.st_name)
        print("id: ", self.st_id)

class Grade:
    def __init__(self,CGPA):
        self.CGPA =CGPA
        print("CGPA: ", self.CGPA)

class scholarship(student,Grade):
    def __init__(self,name,id,cgpa):
        super().__init__(name,id)
        Grade.__init__(self,cgpa)
        if self.CGPA > 9:
            print("\nScholarship : Rs.10,000")
        elif self.CGPA > 8:
            print("\nScholarship : Rs.7,500")
        elif self.CGPA > 7.5:
            print("\nScholarship : Rs.5,000")
        else: print("\nNo Scholarship")

s = scholarship("janny",125987,9.1)










