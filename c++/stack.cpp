#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> str;
    char stri[] = "Hai everyone";
    int i = 0;
    while(stri[i] != '\0')
    {
        str.push(stri[i]);
        i++;
    }
    while(!str.empty())
    {
        cout<<str.top();
        str.pop();
    }
}
