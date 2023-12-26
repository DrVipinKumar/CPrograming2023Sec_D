#include<stdio.h>
void swapbyvalue(int, int);
void swapbyref(int *, int *);
void swapbyarray(int []);
int main ()
{
    int a=10, b=20;
    int data[]={20,40};
    //printf("A=%d, B=%d\n", a, b);
    // swapbyvalue(a,b);
    // printf("A=%d, B=%d\n", a, b);
    // swapbyref(&a,&b);
    // printf("A=%d, B=%d\n", a, b);
    printf("A=%d, B=%d\n", data[0],data[1]);
    swapbyarray(data);
    printf("A=%d, B=%d\n", data[0],data[1]);
    return 0;
}
void swapbyarray(int num[]){
    int c;
    c=num[0];
    num[0]=num[1];
    num[1]=c;
    printf("A=%d, B=%d\n", num[0], num[1]);
}
void swapbyref(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("A=%d, B=%d\n", *a, *b);
}
void swapbyvalue(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("A=%d, B=%d\n", a, b);
}