#include<iostream>
using namespace std;
class circle{
   private:
       //private data members.
       float x_corr,y_corr;
       float radius;

   public:
      static int number_of_circles ; // static data member.
      circle(){
         update_number_of_circle();
      }
      circle(int a,int b,float rad) // Declaring parameterized Constructor.
      {
          x_corr = a;
          y_corr = b;
          radius = rad;
      }
      circle(circle &copy_circle)  // Declaring Copy Constructor.
      {
          x_corr = copy_circle.x_corr;
          y_corr = copy_circle.y_corr;
          radius = copy_circle.radius;
      }
      void display_circle(string obj_name) // Declaring member function for displaying data.
      {
          cout<<"Data of Object - "<<obj_name<<" :\t";
          cout<<"Center :(x,y) = ("<<x_corr<<","<<y_corr<<")\t";
          cout<<"Radius : "<<radius<<endl;
      }
      friend void update_circle(circle &,float , float , double); // defining friend function.
      static void update_number_of_circle() // static member function for update_number_of_circle
      {
          number_of_circles += 1;
      }
};
// initializing static varible
int circle::number_of_circles = 0;
// Declaring friend function.
void update_circle(circle &object_name,float x_corrdinate,float y_corrdinate,double radi)
{
    object_name.x_corr = x_corrdinate;
    object_name.y_corr = y_corrdinate;
    object_name.radius = radi;
}
int main()
{
    circle c1,c2,c3; // Declaring  objects c1,c2,c3.
    c1 = circle(4,5,5.0);     // Assigning values to private Data members
    c2 = circle(5,9,8.0);     // using parameterized constructor for c1,c2 circle objects.
    c3 = circle(c1);          // Copying C1 to C2 using Copy Constructor.
    cout<<"\nData after initializing & CopyConstructor :-\n\n";
    c1.display_circle("c1");
    c2.display_circle("c2");          // displaying data members of class using member function.
    c3.display_circle("c3");
    update_circle(c2 ,9,-3,6.5 );      // updating object c2,c3 with new values using friend function
    update_circle(c3 ,8,7,5.89);
    cout<<"\nData after Updating using friend function :-\n\n";
    c1.display_circle("c1");
    c2.display_circle("c2");          // displaying data members of class after updating.
    c3.display_circle("c3");
    cout<<"\nNo of objects Created : "<<c2.number_of_circles<<"\n";
    return 0;
}
