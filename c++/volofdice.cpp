#include <iostream>
using namespace std;

class dice_vol
{
private:
    float edge;
    float volume;
public:
    dice_vol(){}
    dice_vol(float ed)
    {
        edge = ed;
        volume = ed*ed*ed;
    }
    dice_vol operator +(dice_vol ed2)
    {
       dice_vol d;
       d.volume = volume+ed2.volume;
       d.edge =edge+ed2.edge;
       return d;
    }
    void display()
    {
        cout<<volume<<endl;
    }
};
int main()
{
    dice_vol ed1,ed2,ed3;
    ed1=dice_vol(9.0);
    ed2=dice_vol(8.0);
    ed3 = ed1+ed2;
    ed3.display();


}
