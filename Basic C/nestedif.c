#include<stdio.h>
int main()
{
   int n1,n2,n3;
   n1=10,n2=40,n3=50;
    if(n1>n2 && n1>n3){  // && == AND, || == OR
        printf("n1 is greater");

    } else {
        if (n2>n3){
            printf("n2 is greater");            
        } else 
        {
            printf("n3 is greater");
        }
    }
    // } else if (n2>n3)//(n2>n1 && n2>n3)
    // {
    //       printf("n2 is greater");
    // } else {
    //     printf("n3 is greater");
    // }
    return 0;
}
