#include <iostream>
using namespace std;

class MathOperations
{
public:
       void add(int a, int b)
       {
              cout << "Addition: " << a + b << endl;
       }
       void subtract(int a, int b)
       {
              cout << "Subtraction: " << a - b << endl;
       }
       void multiply(int a, int b)
       {
              cout << "Multiplication: " << a * b << endl;
       }
       void divide(int a, int b)
       {
              cout << "Division: " << a / b << endl;
       }
};

int main()
{
       MathOperations mathOps;
       int a, b;
       cout << "Enter first number: ";
       cin >> a;
       cout << "Enter second number: ";
       cin >> b;
       mathOps.add(a, b);
       mathOps.subtract(a, b);
       mathOps.multiply(a, b);
       mathOps.divide(a, b);
       return 0;
}
