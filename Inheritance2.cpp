#include <iostream>
 using namespace std;
 class Shape {
     public:
     void shape() {
         cout<<"This is a shape"<<endl;
     }
 };
 class Polygon:public Shape{
     public:
     void polygon(){
         cout<<"Polygon is a shape. "<<endl;
     }
 };
 
 class Rectangle: public Polygon{
     public:
     void rectangle(){
         cout<<"Rectangle is a polygon"<<endl;
     }
 };
 class Triangle: public Rectangle {
     public:
     void triangle(){
         cout<<"Triange  is polygon"<<endl;
     }
 };
 class Square : public Triangle {
     public:
     void square(){
         cout<<"Square is a reactangle"<<endl;
     }
 };

int main()
{
    Square s1;
    s1.shape();
    s1.polygon();
    s1.rectangle();
    s1.triangle();
    s1.square();
    

    return 0;
}
