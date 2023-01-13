#include <iostream>
using namespace std;

class Calculator
{
private:
       int num1;
       int num2;

public:

       Calculator(int n1, int n2)
       {
              num1 = n1;
              num2 = n2;
       }

       int add()
       {
              return num1 + num2;
       }

       int subtract()
       {
              return num1 - num2;
       }

       float divide()
       {
              return (float)num1 / num2;
       }

       int multiply()
       {
              return num1 * num2;
       }
};

int main()
{
       Calculator calculator(10, 5);
       cout << "Addition: " << calculator.add() << endl;
       cout << "Subtraction: " << calculator.subtract() << endl;
       cout << "Division: " << calculator.divide() << endl;
       cout << "Multiplication: " << calculator.multiply() << endl;
       return 0;
}
