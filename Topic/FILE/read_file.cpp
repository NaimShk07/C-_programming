#include<iostream>
#include<fstream>
using namespace std;

int main(){
       char data[10];
       fstream xyz;
       xyz.open("myfile.txt",ios::in);
       xyz >> data;
       cout << data <<endl;
       xyz.close();
}