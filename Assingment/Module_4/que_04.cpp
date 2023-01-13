#include <iostream>
using namespace std;

class Matrix
{

public:
       int data1[3][3], data2[3][3], add[3][3];
       Matrix()
       {
              // Initialize the matrix with some values
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            data1[i][j] = i + j;
                     }
              }
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            data2[i][j] = i + j;
                     }
              }
       }
       void add_matrixes()
       {
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            add[i][j] = data1[i][j] + data2[i][j];
                     }
              }
       }

       void display()
       {
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            cout << data1[i][j] << " ";
                     }
                     cout << std::endl;
              }
              cout << std::endl;
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            cout << data2[i][j] << " ";
                     }
                     cout << std::endl;
              }
              cout << std::endl;
              cout << "Added Matrix";
              cout << std::endl;

              // Print the added matrix
              for (int i = 0; i < 3; i++)
              {
                     for (int j = 0; j < 3; j++)
                     {
                            cout << add[i][j] << " ";
                     }
                     cout << std::endl;
              }
       }
};

int main()
{
       Matrix mat;
       mat.add_matrixes();
       mat.display();
       return 0;
}
