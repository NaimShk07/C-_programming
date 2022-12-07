#include <iostream>
using namespace std;

class demo
{
public:
       int a, b;
       char op;

public:
       void cal()
       {
              cout << "Enter value a" << endl;
              cin >> a;
              cout << "Enter value b" << endl;
              cin >> b;
              cout << "Enter operator" << endl;
              cin >> op;

              if (op == '+')
              {
                     cout << "Addition is " << a+b << endl;
              }
             else if (op == '-')
              {
                     cout << "Subtraction is " << a-b << endl;
              }
             else if (op == '*')
              {
                     cout << "Multiplication is " << a*b << endl;
              }
             else if (op == '/')
              {
                     cout << "Division is " << a/b << endl;
              }
              
              else
              {
                     cout << "Enter a valid operator" << endl;
              }
       }
};

int main()
{
       demo d;
       d.cal();
       return 0;
}
