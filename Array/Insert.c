#include<stdio.h>
int main ()
{
    int data[12]={12,34,56,78,90,16,36,39,59,14};
    int value;
    int index;
    int N=9;
    printf("Enter position to insert value=>");
    scanf("%d",&index);
    printf("Enter value to insert=>");
    scanf("%d",&value);
    printf("Array value before insert=>");
    for(int i=0;i<N;i++){
        printf("%d ",data[i]);
    }
    for(int i=N+1;i>index;i--)
    {
        data[i]=data[i-1];
    }
    data[index]=value;
    N++;
    printf("\nArray value after insert=>");
    for(int i=0;i<N;i++){
        printf("%d ",data[i]);
    }
    return 0;
}