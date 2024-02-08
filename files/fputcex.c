#include<stdio.h>
#include<string.h>
int main ()
{
    FILE *fp;
    char data[30];
    int len;
    fp=fopen("abc.txt","w");
    printf("Enter data for file\n");
    gets(data);
    len=strlen(data);
    for(int i=0;i<len;i++){
        fputc(data[i],fp);
    }
    fclose(fp);
    return 0;
}