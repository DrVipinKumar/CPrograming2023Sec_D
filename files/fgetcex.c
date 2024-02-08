#include<stdio.h>
int main ()
{
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","rb");
    while(!feof(fp)){
       ch=fgetc(fp);
       printf("%c",ch);
    }
    fclose(fp);
    return 0;
}