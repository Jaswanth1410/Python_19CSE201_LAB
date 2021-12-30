#include<iostream>
using namespace std;
class fact
{
private:
    int x;
public:

    int f=1;
    fact(int num)
    {
        x = num;
    }
    int getf()
    {
      for(int i=2;i<=x;i++)
      {
          f= f*i;
      }
        return f;
    }
};
int main()
{
    fact p(5);
    cout<<p.getf();
}
