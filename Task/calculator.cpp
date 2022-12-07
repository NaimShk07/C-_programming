#include <iostream>
using namespace std;

class demo
{
public:
       int a = 10, b = 20;

public:
       void cal()
       {
              cout << a + b << endl;
       }
};

int main()
{
       // int a = 10, b = 20;
       demo d;
       d.cal();
       // cal(a,b);
       return 0;
}