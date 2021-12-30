#include <iostream>
using namespace std;
template <typename t>
void series(t x,t sum, int n)
{
    for(int i=1;i<=n;i++)
    {
        sum += i*x;
    }
    cout<<"\n\tsum of series for x = "<<x<<" is : "<<sum<<endl;
}
int main()
{
    series<int>(2.5,1,5);
}
