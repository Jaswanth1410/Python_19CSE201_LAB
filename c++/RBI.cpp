// Using HAS-A Relationship;
#include<iostream>
using namespace std;
class Customer
{
public:
    string cust_name;
    int cust_id;
};

class Account
{
public:
 string acc_Type;
 string branch;
};

class RBI
{
private:
    Customer c;
    Account a;
public:
    double min_intrest_rate = 4;
    double WithdrawalLimit = 10000;
void set_data(string cust,int cu_id,string a_type,string br)
{
    c.cust_name = cust;
    c.cust_id = cu_id;
    a.acc_Type = a_type;
    a.branch = br;
}
void display()
{
    cout<< "cust_name  = "<<c.cust_name
        << "\ncust_id  = "<<c.cust_id
        << "\nacc_Type = "<<a.acc_Type
        << "\nbranch   = "<<a.branch;
}
};

class SBI: public RBI
{
public:
    double SBI_intr ;
    double SBI_Withd;
    void get_sbi(double i,double W)
    {
        if(i >= min_intrest_rate)
               SBI_intr= i;
        else
            SBI_intr = min_intrest_rate;

        if(W <= WithdrawalLimit)
               SBI_Withd= W;
        else
            SBI_Withd = WithdrawalLimit;
    }
void dis_in()
{
     cout<< "SBI_intrest  = "<<SBI_intr
        << "\nSBI_Withdrawl = "<<SBI_Withd;
}
};

class ICICI: public RBI
{
public:
    double icic_intr ;
    double icic_Withd;
    void get_icic(double i,double W)
    {
        if(i >= min_intrest_rate)
               icic_intr= i;
        else
            icic_intr = min_intrest_rate;

        if(W <= WithdrawalLimit)
               icic_Withd= W;
        else
            icic_Withd = WithdrawalLimit;
    }
void dis_in()
{
     cout<< "\nicic_intrest  = "<<icic_intr
        << "\nicic_Withdrawl = "<<icic_Withd;
}
};

int main()
{
    SBI a;
    a.set_data("hello",456,"saving","kotak");
    a.get_sbi(3,6000);
    a.display();
    a.dis_in();
}
