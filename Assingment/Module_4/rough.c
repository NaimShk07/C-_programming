#include<stdio.h>

int main(){
       int fib,fib1=0,fib2=1;
       printf("%d\n",fib1);
       printf("%d\n",fib2);

       for (int i = 3; i <=10; i++)
       {
          fib=fib1+fib2;
          printf("%d\n",fib);
          fib1=fib2;
          fib2=fib;
       }
       

}