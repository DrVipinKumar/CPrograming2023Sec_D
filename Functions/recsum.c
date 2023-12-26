#include<stdio.h>
int dsum(int);
int main ()
{
    int n=15;
    int ds=dsum(n);
    printf("%d",ds);
    return 0;
}
int dsum(int n)
{
    if(n==1)
     {
        return 1;
     } 
     else 
     {
        return n+dsum(n-1);
     }
}