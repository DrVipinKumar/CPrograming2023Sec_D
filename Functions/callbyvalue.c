#include<stdio.h>
void swap(int,int);
int main ()
{
    int n1=20, n2=50;
    printf("N1=%d and N2=%d\n",n1,n2);
    swap(n1,n2);//call by value
    printf("N1=%d and N2=%d\n",n1,n2);
    return 0;
}
void swap(int n1, int n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("N1=%d and N2=%d\n",n1,n2);
}