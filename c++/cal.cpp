
#include <iostream>
using namespace std;
template <class t>
void mul (t x,t y)
{
    t r = x*y;
    cout<<"\tmultiplication :" <<r;
}
template <class s>
void divi(s x,s y)
{
    s r = x/y;
    cout <<"\n\tDivision :" <<r;
}
int main()
{

    mul(5,6);
    divi<double>(12,5);
}
