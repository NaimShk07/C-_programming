#include <iostream>
using namespace std;

// wap of fibonacci and factorial using class

class fib
{

public:
      int fib, fib1 = 0, fib2 = 1;

      void find_fib(int n)
      {
            cout << fib1 << endl;
            cout << fib2 << endl;
            for (int i = 2; i < n; i++)
            {
                  fib = fib1 + fib2;
                  cout << fib << endl;
                  fib1 = fib2;
                  fib2 = fib;
            }
            
      }
};

class fact
{
public:
      int fact = 1;

      void find_fact(int n)
      {
            for (int i = 1; i <= n; i++)
            {
                  fact = fact * i;
            }
            // printf("The factorial of %d is %d",n,fact)
            cout << "The factorial of " << n << " is " << fact;
      }
};

int main()
{
      fib d;
      fact e;

      d.find_fib(5);
      e.find_fact(5);
}