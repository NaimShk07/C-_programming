#include <iostream>
#include <string>
using namespace std;

class String
{
private:
       string data;

public:
       String(string s)
       {
              data = s;
       }
       String operator+(const String &s2)
       {
              return data + s2.data;
       }
       void print()
       {
              cout << data << endl;
       }
};

int main()
{
       String s1("Hello, ");
       String s2("World!");
       String s3 = s1 + s2;
       s3.print();
       return 0;
}
