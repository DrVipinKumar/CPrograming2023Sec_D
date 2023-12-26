#include<stdio.h>
void mul(int,int);  //function prototyping/declaration
void mul1();

int main ()
{
    int n1=10,n2=20;  //actual parameter/argument
    mul(n1,n2);
    mul(34,56);
    mul1();
    return 0;
}
void mul(int n1, int n2){
    printf("Multiply =%d",(n1*n2));
}

void mul1(){
    int n1, n2;
    printf("Enter numeber 1=>");
    scanf("%d",&n1);
    printf("Enter numeber 2=>");
    scanf("%d",&n2);
    printf("Multiply =%d",(n1*n2));
}
// int mul (int n1, int n2) //formal parameter/argument
// {
//      return n1*n2;
// }