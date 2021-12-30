#include<iostream>
using namespace std;
class student{
  public:
    char name[20];
    int id,maths,phy,chem,sum;

};
int main()
{
    int n;
    cout<<"Enter no of students : ";
    cin>>n;
    student stud[n];
    for(int i=0;i<n;i++)
    {
      cout << "Enter student "<<i+1<<" Details"<<"\n";
      cin>>stud[i].name;
      cin>>stud[i].id;
      cin>>stud[i].maths;
      cin>>stud[i].phy;
      cin>>stud[i].chem;
      stud[i].sum = stud[i].maths+stud[i].phy+stud[i].chem;
    }
     for(int i=0;i<n;i++)
    {
      cout << "Enter student "<<i+1<<"Details";
      cout << stud[i].name<<"\t";
      cout << stud[i].id<<"\t";
      cout << stud[i].maths<<"\t";
      cout << stud[i].phy<<"\t";
      cout << stud[i].chem<<"\t";
      cout << stud[i].sum<<"\n";
    }

}
