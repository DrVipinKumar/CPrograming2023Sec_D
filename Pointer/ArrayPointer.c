#include<stdio.h>
int main ()
{
    int data[]={2,34,56,78,9};
    int *p=data;
     p === data 
     (p+1)===(data+1)
      *(data+1)===data[1]
      data[0]===p[0]
    // printf("%d",*(data+3));
    printf("\nValue of Array=\n");
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }
    return 0;
}