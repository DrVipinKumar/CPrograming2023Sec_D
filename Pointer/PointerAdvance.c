#include<stdio.h>
int main ()
{
    int a=20, b=10;
    int *pa, *pb;
    pa=&a;
    pb=&b;
    int *arrayofpointer[]={pa, pb};
    printf("%d ",*arrayofpointer[0]);
    printf("%d ",*arrayofpointer[1]);
    return 0;
}