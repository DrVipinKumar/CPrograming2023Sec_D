#include"stdio.h"
int main()
{
    int i=0;
    char y='y';
    while(y!='n'){
      printf("this is while loop\n");
      i++;
      if (i>4){
        y='n';
      }
    }
    return 0;
}
