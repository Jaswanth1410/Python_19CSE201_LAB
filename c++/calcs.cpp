#include <iostream>
using namespace std;
template <class t>
class cal
{
    public:
    t r;
    void mul(t x,t y)
    {
     r = x*y;
    cout<<"\tmultiplication :" <<r;
    }
    void div(t x, t y)
    {
    r = x/y;
    cout<<"\n\tdivision :" <<r;
    }
};

int main()
{
    cal<int> c;
    cal<float> c1;
    c.mul(5,6);
    c1.div(8,9);
}
