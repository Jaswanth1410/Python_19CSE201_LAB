// Private Derivation
#include<iostream>
using namespace std;
class vehicle{
   public:
       float milage;
       double price;
     void vehicle_data()
     {
         cout<<"\nmilage              : "<<milage
             <<"\nprice               : "<<price;
     }
};
class car: private vehicle
{
public:
    float store_ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
    void store(float own,int war,int seat,string fuel,float mil,double pri)
    {
        store_ownership_cost = own;
        warranty = war;
        seating_capacity = seat;
        fuel_type = fuel;
        milage = mil;
        price = pri;
    }
    void car_data()
    {
        cout<<"store_ownership_cost  : "<<store_ownership_cost
            <<"\nwarranty            : "<<warranty
            <<"\nseating_capacity    : "<<seating_capacity
            <<"\nfuel_type           : "<<fuel_type;

    }
    void veh_data(){
         vehicle_data();
    }
};
int main()
{
    car c1;
    c1.store(10000.0,5,8,"Petrol",32.16,200000.00);
    c1.car_data();
    c1.veh_data();
    return 0;
}
