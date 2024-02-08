#include <stdio.h>
typedef union Std
{

    char name[7];
    short id;
    int roll;

} Student;
int main()
{
    Student s1;
    scanf("%s", s1.name);
    scanf("%d", &s1.roll);
    scanf("%d", &s1.id);
    printf("%s", s1.name);
    printf("%d", s1.roll);
    printf("%d", s1.id);
    return 0;
}