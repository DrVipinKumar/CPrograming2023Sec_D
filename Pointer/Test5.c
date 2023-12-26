#include "stdio.h"
    void mystery(int **ptra, int **ptrb) {
    int *temp;
    temp = *ptrb;
    *ptrb = *ptra;
    *ptra = temp;
   }
int main() {
    int a=2016, b=0, c=4, d=42;
    int *pa=&a,*pb=&b,*pc=&c,*pd=&d;
    mystery(&pa, &pb);
    if (a < c)
       mystery(&pc, &pa);
    mystery(&pa, &pd);
    printf("%d\n", *pa);
}