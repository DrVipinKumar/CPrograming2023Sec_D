#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *pnum;  //wild pointer
    printf("%d",*pnum);
    // int *pnum=NULL;
    // printf("%d",*pnum);
    // printf("%d",10);
    // //void pointer
    // int num=10;
    // void *pnum= (void*)&num;
    // printf("%d",*((int *)pnum));
    return 0;
}