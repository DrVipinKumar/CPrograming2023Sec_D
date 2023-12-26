#include<stdio.h>
int main ()
{
    int r1, r2, c1, c2;
    printf("Enter number of ROWS for Matrix 1=>");
    scanf("%d",&r1);
    printf("Enter number of COLUMNS for Matrix 1=>");
    scanf("%d",&c1);
    printf("Enter number of ROWS for Matrix 2=>");
    scanf("%d",&r2);
    printf("Enter number of COLUMNS for Matrix 2=>");
    scanf("%d",&c2);
    if (c1==r2)
    {
    int m1[r1][c1];
    int m2[r2][c2];
    int result[r1][c2];
    printf("Enter Rows=%d and Columns=%d in Matrix 1\n",r1,c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter Rows=%d and Columns=%d in Matrix 2\n",r2,c2);
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Multiplication of Matrix is=>\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            result[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                result[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    } else {
        printf("Matrix multiplication not possible");
    }
    return 0;
}