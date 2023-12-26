#include "stdio.h"
 
int main()
{
    int size_of_int = sizeof(long long);
    int size_of_char = sizeof(unsigned char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(long double);
 
    printf("The size of long data type : %d\n", size_of_int);
    printf("The size of char data type : %d\n",
           size_of_char);
    printf("The size of float data type : %d\n",
           size_of_float);
    printf("The size of double data type : %d",
           size_of_double);
 
    return 0;
}