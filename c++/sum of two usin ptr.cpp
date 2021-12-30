#include<iostream>
using namespace std;

int main()
{
    int a,b,*p = &a,*q =&b,sum;
    cout<<"Enter the Numbers :";
    cin>>a>>b;
    sum = *p+*q;
    cout<<"Sum : "<<*p<<" + "<<*q<<" = "<<sum;
    return 0;
}
