#include<iostream>
using namespace std;
class workers{
  private:
    float wageperhour;

  public:
    int id ;
    int hours;
    string name;
    char group;
    void setdata(int i,string na,char gr,int h,float pay)
    {
        id = i;
        name = na;
        group = gr;
        hours = h;
        wageperhour = pay;
    }
    float wwages()
    {
        float wage = 7*wageperhour*hours;
        return wage;
    }

};
int main()
{
    workers A[5];

    A[0].setdata(42,"Siva",'A',20,95.6);
    A[1].setdata(43,"xxx",'B',22,98.6);
    A[2].setdata(44,"yyy",'C',24,97.6);
    A[3].setdata(45,"zzz",'A',18,96.6);
    A[4].setdata(46,"vvv",'C',26,94.6);
    for(int i =0 ;i<5;i++)
    {
        cout<<"ID : "<<A[i].id<<"  Name : "<<A[i].name<<"\tGROUP :"<<A[i].group<<"\tWeekly_Wage : "<<A[i].wwages()<<endl;
    }

}
