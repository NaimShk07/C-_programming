#include <iostream>
using namespace std;

class demo {
       public:
       int a;
       int b;

       demo(int x,int y){
        cout << "constructor called" << endl;
             a=x;
             b=y;

        

       }
       int add(){
              return a+b;
       }

};

int main (){
       demo d(3,4);
       cout << d.add() << endl;
}