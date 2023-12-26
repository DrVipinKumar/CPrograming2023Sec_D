#include"stdio.h"
int main()
{
    int i;
    //for (initialization, condition, increment/decrement)
    for(i=1;i<=5;i++)  
    {
        printf("i=%d\n",i);
       for(int j=1;j<=5;j++){
        printf("j=%d\n",j);
       }
    }
    
    return 0;
}
