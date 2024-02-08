#include <stdio.h>
#define PI 3.14 // macro
#define MUL(a, b) a *b
#define SQUARE(x) (x) * (x)
#define MAX(x, y) x > y ? printf("%d is greater", x) : printf("%d is greater", y)
#define MAXIF(x, y) if(x>y) \
                    printf("%d is greater\n", x);\
                    else  \
                    printf("%d is greater\n", y);
#define LOOP(x) while(y!=x)\
                 {\
                  printf("%d\n",y);\
                  y++;\
                 }
int main()
{
    int r = 10;
    int y=0;
    printf("Area of circle=%f\n", (PI * r * r));
    printf("Multiply=%d\n", MUL(4 - 2, 2 + 2));
    printf("SQUARE=%d\n", SQUARE(4 - 1));
    MAX(5,8);
    MAXIF(5,3);
    LOOP(5);
    return 0;
}