#include <stdio.h>
int main()
{
    char name[20] = "KIET MCA";
    int roll_no = 3;
    FILE *rfp, *wfp;
    wfp = fopen("abc.txt", "a+");
   // fscanf(wfp,"\n%s, %d, %f",name,roll_no, value);
    fprintf(wfp, "\n%s, %d", name, roll_no);
    fclose(wfp);
    return 0;
}