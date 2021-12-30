#include <iostream>
using namespace std;
template <typename t>
void s(t x, t y)
{
    t temp;
    temp = x;
    x = y;
    y = temp;
    cout<<x<<y;
}
int main()
{
  s<int>(3,7);
}

