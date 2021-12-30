#include<iostream>
using namespace std;
class prime
{
private:
    int x;
public:

    int f=1;
    prime(int num)
    {
        x = num;
    }
    string getp()
    {
       for(int i=2; i<=x/2; ++i) {
       if(x%i==0) {
         return "Not PRIME";
      }

      }
      return "prime";
    }
};
int main()
{
    prime p(5);
    cout<<p.getp();
}
