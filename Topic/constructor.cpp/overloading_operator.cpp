#include <iostream>
using namespace std;

//  int operator++() - pre increment
//  int operator++(int) - post increment

class demo
{
public:
       int a;

       int operator++()
       {
              ++a;
              return a;
       }
       int operator++(int)
       {
              a++;
              return a;
       }

};
int main(){
       demo d;
       d.a=10;
       cout << "before" << d.a << endl;
       


       d++;
       cout << "after" << endl;
       cout << d.a << endl;

}