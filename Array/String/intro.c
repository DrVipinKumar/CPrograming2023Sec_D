#include<stdio.h>
int main ()
{
    char name1[5]={'A','B','C','D','\0'};
    char name2[5]={"KIET"};
    printf("%s\n",name1);
    printf("%s\n",name2);
    printf("Size of %d\n",sizeof(name1));
    printf("Size of %d\n",sizeof(name2));
    for(int i=0;name1[i]!='\0';i++)
    {
        printf("%c",name1[i]);
    }
    

    return 0;
}