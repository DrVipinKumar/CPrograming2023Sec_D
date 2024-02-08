#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 10;
    printf("%d\n", num);
   // int *num1 = (int *)malloc(sizeof(int));
    int *num1 = (int *)calloc(1,sizeof(int));
    *num1 = 20;
    printf("%d\n", *num1);
    //int *data = (int *)malloc(5 * sizeof(int));
    int *data = (int *)calloc(5, sizeof(int));
    printf("Enter 5 element in array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", data + i);
    }
    printf("Array values are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", *(data + i));
    }

    return 0;
}