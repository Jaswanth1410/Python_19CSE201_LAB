
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <string> rev;
    string s = "India is my country";

    for(int i= 0; i<s.length();i++)
    {
      string w = "" ;
       while(s[i]!= ' ' && i<s.length()){
         w +=s[i];
         i++;
       }
      rev.push(w);
    }
    while(!rev.empty())
    {
        cout<<rev.top()<<" ";
        rev.pop();
    }
}
