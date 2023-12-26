#include<stdio.h>
void counter();
int main ()
{
    counter();   
    counter();   
    counter();   
    return 0;
}
void counter(){
    static int count;
    printf("Counter=%d\n",count);
    count++;
}