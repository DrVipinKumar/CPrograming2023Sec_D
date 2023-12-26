#include<stdio.h>
void square();
int main ()
{
    square();
    return 0;
}
void square()
{
   int num;
    printf("Enter number of square=>");
    scanf("%d",&num);
    int r=num*num;
    printf("Square of number is =%d",r);
}