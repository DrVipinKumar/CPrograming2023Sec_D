#include<stdio.h>
enum Bool {false=100, true, normal=20, normal1};
//enum is use to create user define data type that give 
//name to assign integral constant. 
int main ()
{
    enum Bool check=true;
    printf("Check =%d, Normal=%d",check,normal);
    return 0;
}