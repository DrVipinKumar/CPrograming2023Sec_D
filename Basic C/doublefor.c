#include"stdio.h"
int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==4){
                break;
            }
            printf("In Inner loop=%d\n",j);
        }
            printf("In Outer loop=%d\n",i);
    }
    return 0;
}
