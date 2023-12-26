#include<stdio.h>
int main()
{
    int table;
    int i=0;
    printf("Enter table=");
    scanf("%d",&table);
    for(i=1;i<11;i++){
        printf("%d X %d= %d\n",table,i,(i*table));
    }
    return 0;
}
