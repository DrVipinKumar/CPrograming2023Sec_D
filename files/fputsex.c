#include <stdio.h>
int main()
{
    FILE *fp;
    char data[40];
    fp = fopen("abc.txt", "w");
    printf("Enter data for file\n");
    fgets(data,40,stdin);
    fputs(data, fp);
    printf("File created");
    fclose(fp);
    return 0;
}