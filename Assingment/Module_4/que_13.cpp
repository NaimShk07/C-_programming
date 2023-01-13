#include <iostream>
using namespace std;

inline int square(int a)
{
       return a * a;
}

inline int cube(int x)
{
       return x * x * x;
}

int main()
{
       int num;
       cout << "Enter numbers: ";
       cin >> num;
       cout << "Square value: " << square(num) << endl;

       cout << "Cubic value: " << cube(num) << endl;
       return 0;
}
