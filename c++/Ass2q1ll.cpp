#include<iostream>
#include <list>
#include <iterator>
using namespace std;
void show_list(list <int> L)
{
    list <int> :: iterator it;
    for(it = L.begin(); it != L.end(); ++it)
        cout<< '\t' << *it;
    cout << '\n' ;
}
int main()
{
list <int> L1,L2;

for(int i = 1 ; i <= 10;i++)
{
    L1.push_back(i*2);
    L2.push_front(i*3);
}
cout<<"Contents of L1 :";
show_list(L1);
cout<<"Contents of L2 :";
show_list(L2);

cout<<"Contents of L1 after reversed :";
L1.reverse();
show_list(L1);

cout<<"Contents of L2 after Sorted :";
L2.sort();
show_list(L2);

L2.push_front(L1.front());
L2.push_back(L1.back());
cout<<"Contents of L2 after adding front and back elements : \n";
show_list(L2);

cout<<"Front element of L1 : \t"<<L1.front()<<endl;
L1.pop_front();
cout<<"back element of L1 : \tdc1y,kuku,yk7u8i89i9o`"<<L1.back()<<endl;
L1.pop_back();

cout<<"contents of L1 after poping : \n";
show_list(L1);
return 0;
}

