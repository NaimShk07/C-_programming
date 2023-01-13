#include <iostream>
using namespace std;

// Function overloading

class Shape
{
public:
       // calculating area of circle
       float area(float radius)
       {
              return 3.14 * radius * radius;
       }
       // calculating area of rectangle
       float area(float length, float breadth)
       {
              return length * breadth;
       }
       // calculating area of triangle
       float area(float base, float height)
       {
              return 0.5 * base * height;
       }
};

int main()
{
       Shape s;
       // float radius, length, breadth, base, height;
       // cout << "Enter radius of circle: ";
       // cin >> radius;
       // cout << "Area of circle is: " << s.area(radius) << endl;
       // cout << "Enter length and breadth of rectangle: ";
       // cin >> length >> breadth;
       // cout << "Area of rectangle is: " << s.area(length, breadth) << endl;
       // cout << "Enter base and height of triangle: ";
       // cin >> base >> height;
       // cout << "Area of triangle is: " << s.area(base, height) << endl;

      cout<< s.area(4.2)<<endl;

       return 0;
}
