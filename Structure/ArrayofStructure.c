#include <stdio.h>
typedef struct Std
{
    char sname[30];
    int sid;
    int marks;
} Student;
int main()
{
    Student students[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name\n");
        scanf("%s", &students[i].sname);
        printf("Enter sid\n");
        scanf(" %d", &students[i].sid);
        printf("Enter marks\n");
        scanf("%d", &students[i].marks);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Record of Student %d\n", i);
        printf("Name=%s\n", students[i].sname);
        printf("Sid=%d\n", students[i].sid);
        printf("Marks=%d\n", students[i].marks);
        printf("----------------------------------\n");
    }
    return 0;
}