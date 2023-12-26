#include<stdio.h>
int *getSum(int, int);
int main ()
{
    int *s;
    s=getSum(20,40);
    printf("Sum=%d",*s);
    return 0;
}
int * getSum(int n1, int n2){
    int s=(n1+n2);
    return &s;
}