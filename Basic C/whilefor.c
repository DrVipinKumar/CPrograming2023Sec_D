#include"stdio.h"
int main(int argc, char const *argv[])
{
    // for(int i=1;i<=10;i++){
    //      if(i==8){
    //         continue;
    //     }
    //     printf("under for loop %d\n",i);      

    // }
    int j=1;
    while(j<=10){
        if(j==8){
            j++;
            continue;
        }
        printf("under for loop %d\n",j);
        j++;
    }
    return 0;
}
