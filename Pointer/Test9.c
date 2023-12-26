#include<stdio.h>
void printxy(int, int);
int main ()
{
    int x=10, y=20;
    printxy(x,y);
    return 0;
}
void printxy(int x, int y)
{
int *ptr;
x=0;
ptr=&x;
y=*ptr;
*ptr=1;
printf("%d,%d",x,y);
}
