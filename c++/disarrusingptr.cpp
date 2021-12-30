#include<iostream>
using namespace std;

int main()
{
    int A[] = {25,150,90,60,250,68};
    int *p = A,i=0,maxm = *p;
    while(i<5)
    {
        if(*(p+i) < *(p+i+1))
        {
            maxm = *(p+i+1);
        }
        i++;
    }
    cout<<"Max element of Array:"<<maxm<<"\n\n";
    return 0;
}
