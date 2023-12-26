#include<stdio.h>
int Strlen(char []);
void removewhitespace(char []);
int main ()
{
    char name[40]={"This is C String Array"};
    printf("Length=%d\n",Strlen(name));
    printf("Size of=%d\n",sizeof(name));
    removewhitespace(name);
    return 0;
}
void removewhitespace(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        if(name[i]!=' ')
        {
            printf("%c",name[i]);
        }
        i++;
    }
}
int Strlen(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    return i;
}