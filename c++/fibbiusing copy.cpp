/*#include<iostream>
using namespace std;
class fib
{
  private:
     unsigned long int f0,f1,nex;
  public:
     fib()
     {
       f0=0;
       f1=1;
       nex=f0+f1;
     }
     fib (fib &ptr)
     {
         f0=ptr.f0;
         f1=ptr.f1;
         nex=ptr.nex;
     }
     void f(int n)
     {
     for (int i=0; i<=n;i++)
     {
         cout << f0 <<"\t";
         f0=f1;
         f1=nex;
         nex=f0+f1;
     }
     }

};
int main ()
{
  fib n;
  n.f(5);

}
*/
#include <iostream>

using namespace std;
class FibSeries
{
 int n,n1,n2;
public:
FibSeries()
    {
      n = 0;
      n1 = 1;
      n2 = n + n1;
    }

 FibSeries(FibSeries &ptr)
    {
      n = ptr.n;
      n1 = ptr.n1;
      n2 = ptr.n2;
    }
void addvalue()
    {
      n = n1;
      n1 = n2;
      n2 = n1+n;
    }
 void series()
    {
      cout << n2 <<endl;
    }
};
int main()
{
   FibSeries f;
    int z;
  cout << "Give the number of fibonacci number  :- ";
  cin >> z;
  for(int i;i<=z;i++){
      f.series();
      f.addvalue();
  }

    return 0;
}
