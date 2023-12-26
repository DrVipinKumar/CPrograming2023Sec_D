#include<stdio.h>
int main ()
{
    //2 D Array / 2 dimentional array
    int data[2][3]={  //data
                      {12,34,56}, //*(data+0)
                      {78,34,67}  //*(data+1)
                    };  
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",data[i][j]);//*(*(data+i)+j));
                                
        }
    }
    

    return 0;
}