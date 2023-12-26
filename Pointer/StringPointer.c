#include<stdio.h>
const char * changethestring (const char *);
int main ()
{
    char name[]="KIET MCA";
    char *pname="KIET MCA";
    char *aname=name;   
    printf("%p\n",pname);
    pname="MCA KIET";    
    printf("%s\n",aname);
    printf("%s\n",pname);
    printf("%p\n",pname);
    printf("%p\n",&pname[0]);    
    return 0;
}



