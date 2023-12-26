#include<stdio.h>
int main ()
{
    char c[] = "GATE2011";
    char *p = c;
    printf("%s", p + p[3] - p[1]);
    return 0;
}