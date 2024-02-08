#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *rfp, *wfp;
    char data[20];
    if (argc == 3)
    {
        rfp = fopen(argv[1], "rb");
        wfp = fopen(argv[2], "wb");
        while (!feof(rfp))
        {
            fgets(data, 20, rfp);
            fputs(data, wfp);
        }
        printf("File Copied!");
        fclose(rfp);
        fclose(wfp);
    }
    else
    {
        printf("Use like: %s <filename1> <filename2>", argv[0]);
    }
    return 0;
}