#include<stdio.h>
int main ()
{
    int data[5]={2,3,4,5,6};
    *(data+4)=10;  //data[4]=10;
    for(int i=0;i<5;i++){
        printf("%d ",*(data+i));
        printf("%d ",data[i]);
        printf("\n");
    }
    return 0;
}