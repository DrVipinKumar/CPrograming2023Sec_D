#include<stdio.h>

int main ()
{
   auto int num;
   auto int num1;
    printf("Auto Variable Num=%d\n",num);
    {
    printf("Auto Variable Num1=%d\n",num1);   
        int data=10;
    printf("Auto Variable Data=%d\n",data); 
    }

    return 0;
}