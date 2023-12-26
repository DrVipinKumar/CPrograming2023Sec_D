#include<stdio.h>
int main ()
{
    int num=10;  //variable
    int *pnum=&num; //pointer
    int **dnum=&pnum;  //pointer to pointer , double pointer
    printf("num=%d\n",num);
    printf("pnum=%d\n",*pnum);
    printf("dnum=%d\n",**dnum);
    return 0;
}