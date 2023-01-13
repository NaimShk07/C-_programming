#include <iostream>
#include <string>
using namespace std;

class Lecture
{
private:
       string lecturerName;
       string subjectName;
       string courseName;
       int numberOfLectures;

public:
       void valueAssign(string lecturer, string subject, string course, int number)
       {
              lecturerName = lecturer;
              subjectName = subject;
              courseName = course;
              numberOfLectures = number;
       }

       void addLecture(string lecturer, string subject, string course, int number)
       {
              lecturerName = lecturer;
              subjectName = subject;
              courseName = course;
              numberOfLectures = number;
       }

       void display()
       {
              cout << "Lecturer Name: " << lecturerName << endl;
              cout << "Subject: " << subjectName << endl;
              cout << "Course: " << courseName << endl;
              cout << "Number of lectures: " << numberOfLectures << endl;
              cout << endl;
       }
};

int main()
{
       Lecture lecture1;
       Lecture lecture2;
       Lecture lecture3;
       Lecture lecture4;
       Lecture lecture5;

       lecture1.valueAssign("John Smith", "Computer Science", "Data Structures", 4);
       lecture2.valueAssign("Bob Johnson", "Physics", "Quantum Mechanics", 2);
       lecture3.valueAssign("Jane Doe", "Mathematics", "Calculus", 3);
       lecture4.valueAssign("Sara Lee", "Biology", "Genetics", 5);
       lecture5.valueAssign("Kevin Brown", "Chemistry", "Organic Chemistry", 3);

       lecture2.display();
       lecture3.display();
       lecture4.display();
       lecture5.display();
       return 0;
}
