#include <iostream>
using namespace std;

class mat
{
public:
       char st[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
       void display_mat()
       {
              for (int i = 0; i < 3; i++)
              {
                 for (int j = 0; j < 3; j++)
                 {
                    cout<<" "<<st[i][j]<<" ";
                 }
                 cout<<endl;
                 
              }
       }
};
int main()
{

       mat x;
       x.display_mat();
}