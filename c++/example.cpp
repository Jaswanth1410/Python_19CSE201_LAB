
#include<iostream>
using namespace std;
struct student{
    char name[20];
    int id,maths,phy,chem,sum;

};
int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;
    struct student stud[n];
    for(int i=0;i<=n;i++)
    {
      cout << "Enter student "<<i <<"Details";
      cin>>stud[i].name;
      cin>>stud[i].id;
      cin>>stud[i].maths;
      cin>>stud[i].phy;
      cin>>stud[i].chem;
      stud[i].sum = stud[i].maths+stud[i].phy+stud[i].chem;
    }
     for(int i=0;i<=n;i++)
    {
      cout << "Enter student "<<i <<"Details";
      cout << stud[i].name;
      cout << stud[i].id;
      cout << stud[i].maths;
      cout << stud[i].phy;
      cout << stud[i].chem;
    }

}
