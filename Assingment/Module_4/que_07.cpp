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
      
       Lecture(string lecturer, string subject, string course, int number)
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
       Lecture lecture1("John Smith", "Computer Science", "Data Structures", 4);
       Lecture lecture2("Jane Doe", "Mathematics", "Calculus", 3);
       Lecture lecture3("Bob Johnson", "Physics", "Quantum Mechanics", 2);
       Lecture lecture4("Sara Lee", "Biology", "Genetics", 5);
       Lecture lecture5("Kevin Brown", "Chemistry", "Organic Chemistry", 3);
       lecture1.display();
       lecture2.display();
       lecture3.display();
       lecture4.display();
       lecture5.display();
       return 0;
}
