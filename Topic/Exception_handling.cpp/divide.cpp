#include<iostream>
using namespace std;

class calculator{
       public:
       float division(int x ,int y){
              if (y==0)
              {
                    throw"can not divide by zero";

                    
              }
              else{
                     return(float) x/y;
              }
              

       }


};

int main(){
       calculator c;
       float result;
       try
       {
       float result=c.division(5,0);
       cout << result << endl;
             
       }
       catch(const char* error)
       {
      cout << error << endl;
       }
       
}