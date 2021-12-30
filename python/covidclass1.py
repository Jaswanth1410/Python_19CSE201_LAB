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
p1.aadhar_no= 58963486
p1.person_details()
p1.covid_status()

print("--------------------------------------")
print("Covid_lable : ", covid_details.covid_lable)
covid_details.covid_lable = "omicron"
print("--------------------------------------")

print("Covid_lable : ", covid_details.covid_lable)
