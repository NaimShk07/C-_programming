#include <iostream>
#include <fstream>
using namespace std;

class Filehandling
{
public:
       fstream filee;
       void create_file(const char fileabc[])
       {
              filee.open(fileabc, ios::out);

              filee.close();
       }
       void write_file(const char fileabc[])
       {
             filee << fileabc;
       }
       void read_file()
       {
       }
};

int main()
{
       Filehandling xyz;

       xyz.create_file("newfile.txt");
       xyz.write_file();
       xyz.read_file();
}