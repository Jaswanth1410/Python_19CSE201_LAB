class covid_details:
    covid_lable = "Delta"
    def __init__(self,name,age,aadahr,noofjabs,affected):
        self.name = name
        self.age = age
        self.aadhar_no = aadahr
        self.no_of_jabs = noofjabs
        self.affected = affected
    def person_details(self):
        print("name : ",self.name)
        print("Age : ",self.age)
        print("Aadhar_No : ",self.aadhar_no)
    def covid_status(self):
        print("No.of.Jabs : ",self.no_of_jabs)
        print("Affected : ",self.affected)

p1 = covid_details("Krishna",26,8564394632,1,"NO")
p1.person_details()
p1.covid_status()

print("--------------------------------------")

p2 = covid_details("Kiran",23,8564396533,2,"Yes")
p2.person_details()
p2.covid_status()
print("Covid_lable : " ,p2.covid_lable)

print("--------------------------------------")

print("Covid_lable : ", covid_details.covid_lable)
