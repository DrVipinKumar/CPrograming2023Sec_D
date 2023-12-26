#include<stdio.h>
int msg(int n);
int main ()
{
    int (*fmsg)()=msg;
    fmsg(10);
    return 0;
}
int msg(int n){
    printf("Message by function,%d",n);
    return 0;
}