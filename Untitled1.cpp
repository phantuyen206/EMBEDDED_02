#include <stdio.h>
#include <stdlib.h>
#define ZISE_ARR (10)
int arr[ZISE_ARR]={0,1,3,5,7,9,2,4,6,8};
int main(){
    int i =0;
    for (i=0;i<ZISE_ARR;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
