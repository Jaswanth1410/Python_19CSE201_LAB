#include<iostream>
using namespace std;
class students{
private:
string sname;
int rollno;
public:
void set_data(string name,int roll)
{
sname = name;
rollno = roll;
}
void dis()
{
cout<<"sname = "<<sname;
}
};



class Academics: virtual public students
{
protected:
int sub1,sub2,sub3;
public:
void acde(int s1,int s2,int s3)
{
sub1 =s1;sub2= s2;sub3 =s3;
}
};
class extracur: virtual public students
{
protected:
int sports;
public:
void spo(int s)
{
sports = s;
}



};
class result:public extracur,public Academics
{
public:
double avr;
void result_data()
{
cout<<sub1<<'\n'<<sub2<<'\n'<<sub3<<'\n'<<sports<<endl;
avr = ((double)sub1+(double)sub2+(double)sub3+(double)sports)/4;
}
};
int main()
{
result r;
r.set_data("hello",25);
r.acde(91,85,96);
r.spo(89);
r.result_data();
cout<<"Average = "<<r.avr;
}
