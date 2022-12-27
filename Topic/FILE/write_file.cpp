#include<iostream>
#include<fstream>
using namespace std;

int main(){
       fstream xyz;
       char temp[]="helloworld";
       xyz.open("myfile.txt",ios::out);
       xyz << temp;

       xyz.close();
}