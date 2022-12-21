#include <iostream>
using namespace std;

class demo {
       public:
       int a;
       int b;

       demo(){
        a=5;
        b=6;
        cout << "constructor called" << endl;

       }

};

int main (){
       demo d;
       cout << d.a << endl;
}