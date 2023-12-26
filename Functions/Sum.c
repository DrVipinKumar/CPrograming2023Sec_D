#include<stdio.h>
int sum(int, int); //prototype of function or declaration of function
int mul(int,int);
void sub(int,int);
void div();
int main ()
{
    //Function is a block of code that have name, it may return
    //value, it may have arguments, and it may be called any number of times. 
    int n1, n2;
    n1=10,n2=20;
    int s=sum(n1,n2);
    printf("Sum of two number is =%d\n",s);    
    printf("Sum of another two number is =%d\n",sum(40,56));
    printf("Multiply of two number is =%d\n",mul(40,56));
    sub(200,100);
    div();
    return 0;
}
int sum (int n1, int n2)
{
     printf("Multiply of two number in sum is =%d\n",mul(6,23));
    return (n1+n2);
}
int mul (int n1, int n2)
{
    return (n1*n2);
}
void sub (int n1, int n2)
{
    printf("Subtraction of two number is =%d\n",(n1-n2));
}
void div ()
{
    int n1, n2;
    printf("Enter number1=>");
    scanf("%d",&n1);
    printf("Enter number2=>");
    scanf("%d",&n2);
    printf("Division of two number is =%d\n",(n1/n2));
}



  