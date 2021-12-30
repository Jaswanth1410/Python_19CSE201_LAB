#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> str;
    char stri[] = "Hai everyone",s[50];
    int i = 0,j =0;
    while(stri[i] != '\0')
    {

        if(stri[i] == ' ')
        {
            str.push(s);
            j = 0;

        }
        else
        {
          s= stri[i];
          j++;
        }

        i++;

    }
    while(!str.empty())
    {
        cout<<str.top();
        str.pop();
    }
}
