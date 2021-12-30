#include <iostream>
using namespace std;
class bankaccount
{
  private :
    string u_name;
    int account_id;
    float balance;
  public:
    void setdata(string name,int a_id)
    {
        u_name = name;
        account_id = a_id;
    }
    void setdata(string name,int a_id,float bal)
    {
        u_name = name;
        account_id = a_id;
        balance = bal;
    }
    float withdrawal(float w)
    {
        balance -= w;
        return 0;
    }
    float deposit(float d)
    {
        balance += d;
        return 0;
    }
    void display()
    {
        cout<<"user :"<<u_name<<"\nA_id :"<<account_id<<"\nBalance :"<<balance<<endl;
    }
};

int main()
{
    bankaccount u1;
    u1.setdata("Hari",289634);
    u1.setdata("Hari",289634,8000.0);
    u1.deposit(100.0);
    u1.withdrawal(50);
    u1.display();
    return 0;
}
