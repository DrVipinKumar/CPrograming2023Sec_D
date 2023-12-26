#include<stdio.h>
int fact(int, int);
int main ()
{
    int n=5;
    printf("Factorial=%d",fact(n,1));
    return 0;
}
int fact(int n, int f){
    if(n==1 || n==0){
        return f;
    } else {
        fact(n-1,n*f);
    }
}