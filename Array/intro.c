#include<stdio.h>
int main ()
{
    int data[5];
    printf("Enter 5 elements=>");
    for(int i=0;i<5;i++){
        scanf("%d",&data[i]);
    }
    printf("Value of Array are=>");
    for(int i=0;i<5;i++){
        printf("%d ,",data[i]);
    }
    return 0;
}