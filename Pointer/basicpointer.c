#include<stdio.h>
int main ()
{
    int num=10;
    int v1=num;
    int *pnum=&num;
    //pointer is a special type of variable that store address
    //of another variable. 
    printf("%d\n",num);
    printf("%p\n",&num);
    printf("%p\n",pnum);
    printf("%d\n",*pnum);
    printf("%d\n",**&pnum);
    return 0;
}