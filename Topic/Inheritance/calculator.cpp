#include <iostream>
using namespace std;

class area_cal{
       public:
       int find_square(int a){
              return a*a;
       }
       int find_rec(int a,int b){
              return a*b;
       }
       float find_circle(float a){
              return a*a*3.14;
       }
       float find_triangle(float a,float b){
              return a*b/2 ;
       }

};

class std_cal :public area_cal
{
public:
       int add(int a, int b)
       {
              return a + b;
       }
       int sub(int a, int b)
       {
              return a - b;
       }
       int mul(int a, int b)
       {
              return a * b;
       }
       int div(int a, int b)
       {
              return a / b;
       }
};
int main()
{

       std_cal demo;

       printf("Addition is %d\n", demo.add(6, 3));
       printf("Subtraction is %d\n", demo.sub(6, 3));
       printf("Multiplication is %d\n", demo.mul(6, 3));
       printf("Division is %d\n", demo.div(6, 3));

       printf("Area of square is %d\n",demo.find_square(5));
       printf("Area of rectangle is %d\n",demo.find_rec(5,2));
       printf("Area of circle is %.2f\n",demo.find_circle(5));
       printf("Area of triangle is %.2f\n",demo.find_triangle(5,2));
}