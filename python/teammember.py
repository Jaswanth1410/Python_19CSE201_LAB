class TeamMember:
    def __init__(self,me_name,id):
        self.member_name = me_name
        self.member_id = id
        print("member_name: ", self.member_name)
        print("member_id: ", self.member_id)

class Worker:
    def __init__(self,worker_pay,desig):
        self.worker_pay =worker_pay
        self.designation =desig
        print("worker_pay: ", self.worker_pay)
        print("designation: ", self.designation)

class Teamleader(TeamMember,Worker):
    def __init__(self, me_name,id,worker_pay, desig):
        super().__init__(me_name,id)
        # TeamMember.__init__(self,me_name,id)
        super().__init__(worker_pay, desig)
        # Worker.__init__(self,worker_pay, desig)

t = Teamleader("Kiran",12365,50000,"teamlead")
