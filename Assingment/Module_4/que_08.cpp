#include <iostream>
using namespace std;

class Student
{
public:
       int roll_no;
       int sub1, sub2, sub3;
       int total;
       float percentage;

       void get_data(int r, int s1, int s2, int s3)
       {
              roll_no = r;
              sub1 = s1;
              sub2 = s2;
              sub3 = s3;
              total = sub1 + sub2 + sub3;
              percentage = (total / 3.0);
       }

       void display()
       {
              cout << "Roll No"
                   << "\t"
                   << "Sub1"
                   << "\t"
                   << "Sub2"
                   << "\t"
                   << "Sub3"
                   << "\t"
                   << "Total"
                   << "\t"
                   << "Percentage" << endl;
              cout << roll_no << "\t" << sub1 << "\t" << sub2 << "\t" << sub3 << "\t" << total << "\t" << percentage << endl;
       }
};

int main()
{
       Student s1, s2, s3, s4;
       s1.get_data(1, 30, 25, 45);
       s2.get_data(2, 25, 20, 25);
       s3.get_data(3, 20, 15, 35);
       s4.get_data(4, 35, 30, 40);
       s1.display();
       s2.display();
       s3.display();
       s4.display();
       return 0;
}
