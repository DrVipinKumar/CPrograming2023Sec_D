#include <stdio.h>
#include <string.h>
// #pragma pack(1)
typedef struct Std
{
    unsigned int num:20;
    unsigned int roll:10;

} Student;
int main()
{
    Student s1;
    // char name[30] = "KIeT MCA";
    // strcpy(s1.name, "KIET");
    // printf("%s\n", s1.name);
    // s1.roll = 40L;
    // printf("%ld\n", s1.roll);
    printf("%d", sizeof(s1));
    return 0;
}