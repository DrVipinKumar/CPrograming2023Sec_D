#include<stdio.h>
int main ()
{
    int data[12]={12,34,56,78,90,16,36,39,59,14};
    int temp;
    for(int i=0;i<10;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
        {
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;                
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",data[i]);
    }
    
    return 0;
}