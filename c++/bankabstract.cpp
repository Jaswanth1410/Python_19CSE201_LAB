#include<iostream>
using namespace std;

class bank
{
public:
    virtual void getbalance() = 0 ;

};
 class bank_A: public bank
 {
     float balance = 100.0;
 public:
    void getbalance()
    {
        cout<<"Balance in Bank_A = " << balance<<endl;
    }
 };
  class bank_B: public bank
 {
     float balance = 150.0;
 public:
    void getbalance()
    {
        cout<<"Balance in Bank_B = " << balance<<endl;
    }
 };
  class bank_C: public bank
 {
     float balance = 200.0;
 public:
    void getbalance()
    {
        cout<<"Balance in Bank_C = " << balance<<endl;
    }
 };
 int main()
 {
     bank_A A;
     bank_B B;
     bank_C C;
     A.getbalance();
      B.getbalance();
       C.getbalance();
       return 0;
 }
