#include<stdio.h>
int main ()
{
    int flag=0;
    int data[10]={12,56,59,78,56,57,56,35,60,14};
   
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++)
         {
            if(data[i]==data[j]){
               
                if(flag==0) 
                {
                    printf("Value of %d found at",data[i]);
                    printf(" position %d",i); 
                    
                }                
                printf(", %d",j);
                flag++;
            }
       
        }            
        
    }
    if(flag==0){
        printf("Duplicate value not found");
    }
    return 0;
}
