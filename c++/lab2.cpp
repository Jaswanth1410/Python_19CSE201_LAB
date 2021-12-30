#include <iostream>
using namespace std;

class volume
{
public:
    int vol(int cube)
    {
        cout<<"volume of cube: "<<cube*cube*cube<<endl;
         return 0;
    }
    int vol(int length,int breath, int height)
    {
        cout<<"volume of Cuboid: "<<length*breath*height<<endl;
        return 0;
    }
    float vol(float radius, float height)
    {
        cout<<"volume of Cylinder: "<<3.14*radius*radius*height<<endl;
        return 0;
    }
};

int main()
{
    volume obj;
    obj.vol(3);
    obj.vol(3,4,9);
    obj.vol(4.2,9.3);
    return 0;
}
