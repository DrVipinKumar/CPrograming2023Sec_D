#include"stdio.h"
void f(int, short);
void main()
{
    int i = 100;
    short s = 12;
    short *p = &s;
    __________ ;    // call to f()
}
a. f(i,s)
b. f(i,&p)
c. f(s,i)
d. f(i,*p)