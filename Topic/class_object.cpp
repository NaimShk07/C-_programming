#include <iostream>
using namespace std;

class person
{
public:
       char name[10] = "naim";

private:
       int number = 74859632;

protected:
       int pin = 7865;

public:
       void get_details()
       {
              cout << "public details:" << name << endl;
              cout << "number details:" << number << endl;
              cout << "pin details:" << pin << endl;
       }
};

int main()
{
       person p;
       p.get_details();

       return 0;
}
