#include <stdio.h>
typedef struct Std
{
    char *sname;
    int sid;
    int marks;
} Student;
int main()
{
    Student s1 = {.sid = 1, .sname = "Student 1", .marks = 80};
    Student *ps1 = &s1;
    printf("Student name=%s\n", s1.sname);
    printf("Student sid=%d\n", s1.sid);
    printf("Student marks=%d\n", s1.marks);
    printf("Value of structure using pointer\n");
    printf("Student name=%s\n", ps1->sname);
    printf("Student sid=%d\n", ps1->sid);
    printf("Student marks=%d\n", ps1->marks);
    return 0;
}