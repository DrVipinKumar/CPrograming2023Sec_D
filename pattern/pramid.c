#include<stdio.h>
int main ()
{
    int n=7;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}