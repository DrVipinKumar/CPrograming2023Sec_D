#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char data[20];
    fp = fopen("fputcex.c", "rb");
    while (!feof(fp))
    {
        fgets(data, 20, fp);
        printf("%s", data);
    }
    fclose(fp);
    return 0;
}