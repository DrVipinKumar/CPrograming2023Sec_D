#include<stdio.h>
int main ()
{
    int num;
    int *pnum;
      pnum=&num;
      //*pnum=20;
      *&num=20;
      printf("value of num=%d\n",num);
      printf("value of num by pointer=%d\n",*pnum);
    return 0;
}