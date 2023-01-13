#include <iostream>
using namespace std;

class Interest
{
public:
       int principal, year;
       float rate;

       Interest(int p, int y, float r = 2.5)
       {
              principal = p;
              year = y;
              rate = r;
       }
       void calculateInterest()
       {
              float interest = (principal * year * rate) / 100;
              cout << "Simple Interest:" << interest << endl;
       }
};

int main()
{
       int p, y;
       float r;
       cout << "Enter principal amount: ";
       cin >> p;
       cout << "Enter number of years: ";
       cin >> y;
       cout << "Enter rate of interest: ";
       cin >> r;

       Interest obj1(p, y, r);
       obj1.calculateInterest(); // rate of interest as per r value

       Interest obj2(p, y);
       obj2.calculateInterest(); // rate of interest r=2.5

       return 0;
}