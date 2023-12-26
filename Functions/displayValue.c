#include<stdio.h>
void display(int);  //function declaration/prototype
int main ()
{
    int num=10;   //actual parameter
    display(num);   //function calling      
    display(20);
    return 0;
}
void display(int n1)   //function defination
{
    int value=20;
    //n1 is formal parameter
   printf("Value of =%d\n",n1);
}