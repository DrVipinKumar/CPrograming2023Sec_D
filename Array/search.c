#include<stdio.h>
int main ()
{
    int data[10]={12,34,56,78,90,16,36,39,59,14};
    int search=200;
    int flag=0;
    for(int i=0;i<10;i++){
        if(data[i]==search){
            printf("Found at Index %d",i+1);
            flag=1;
            break;
        }
    }
    if(!flag){
         printf("Not Found");
    }
    return 0;
}