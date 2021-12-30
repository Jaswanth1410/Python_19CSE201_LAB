#include<iostream>
using namespace std;
int main()
{
    const char *s = "Ianadaia" ;
    int c = 0;
    while(*s != '\0')
    {
        if(*s == 'a')
        {
            c++;
        }
        *s++;
    }
    cout<<c;
}
