#include <iostream>
using namespace std;
class complex{
  private:
      float real;
      float img;
  public:
      void setdata( float r, float i)
      {
          real = r;
          img = i;
      }
      void operator ++()
      {
          real = ++real;
      }
      void operator --()
      {
          img = --img;
      }
      void display()
      {
          cout<<"("<<real<<")+("<<img<<")i"<<endl;
      }
};
int main()
{
      complex c1;
      c1.setdata(4.5,8.0);
      cout<<"Befor :";c1.display();
      ++c1;
      --c1;
      cout<<"After :";c1.display();
}
