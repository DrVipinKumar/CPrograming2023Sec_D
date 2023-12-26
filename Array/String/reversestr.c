#include<stdio.h>
void revstr(char *);
void revstr1(char [], int);

int main ()
{
    char data[]="This is reverse of string in c using recursion";
    printf("%s\n",data);
    revstr(data);
    printf("\n");
    revstr1(data,0);
    return 0;
}
void revstr1(char data[], int n)
{
    if(data[n]!='\0'){
        revstr1(data,n+1);
        printf("%c",data[n]);
    }
   
}
void revstr(char *data)
{
    if(*data){
        revstr(data+1);
        printf("%c",*data);
    }
   
}