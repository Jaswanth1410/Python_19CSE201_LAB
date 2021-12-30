class Countries:
    def __init__(self,con):
        self.countries_list = con
    def display(self):
        print("Countries list : ")
        for i in self.countries_list:
            print(i)

c = Countries(["India","SouthKorea","China","Srilanka"])
c.display()
