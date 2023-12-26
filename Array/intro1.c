#include<stdio.h>
int main ()
{
  // int data[5]={12,34,56,78,90,56,87};
   int data[5];
    data[0]=12;
    data[1]=34;
    data[2]=56;
    data[3]=58;
    data[4]=59;
    data[5]=60;
    data[6]=90;
    data[7]=45;
      printf("Value of Array are=>");
    for(int i=0;i<8;i++){
        printf("%d ,",data[i]);
    }    return 0;
}