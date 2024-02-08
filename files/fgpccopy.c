#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *rfp, *wfp;
    char ch;
    if (argc != 3)
    {
        printf("use like this:  fgpccopy  <file1> <file2>\n");
    }
    else
    {
        rfp = fopen(argv[1], "rb");
        wfp = fopen(argv[2], "wb");
        while (!feof(rfp))
        {
            ch = fgetc(rfp);
            fputc(ch, wfp);
        }
        fclose(rfp);
        fclose(wfp);
    }
    return 0;
}