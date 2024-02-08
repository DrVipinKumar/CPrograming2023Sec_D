#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num = (int *)calloc(2, sizeof(int));
    *num = 10;
    *(num + 1) = 20;
    printf("%d\n", *num);
    printf("%d\n", *(num + 1));
    num=(int *)realloc(num,1);
    *(num+2)=30;
    printf("%d\n", *(num + 2));
    free(num);
    printf("%d\n", *(num + 1));
    return 0;
}