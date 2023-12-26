#include<stdio.h>
int main ()
{
    int m1[2][2],m2[2][2],r[2][2];
    printf("Enter 2 X 2 value in Matrix 1=>\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter 2 X 2 value in Matrix 2=>\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            r[i][j]=m1[i][j]+m2[i][j];
        }
    }
     
    printf("Value of Matrix 1 (2 X 2)=>\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("Value of Matix 2 (2 X 2)=>\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("Addition of 2 Matix (2 X 2)=>\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}