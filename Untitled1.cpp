#include <stdio.h>
#include <stdlib.h>
#define ZISE_ARR (10)
int arr[ZISE_ARR]={0,1,3,5,7,9,2,4,6,8};
void giamDan(int arr[]){
    int i,j;
    for (i=0;i<ZISE_ARR-1;i++){
        for(j=i+1;j<ZISE_ARR;j++){
            if(arr[i]>arr[j]){
                int tmp =arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}
int main(){
    giamDan(arr);
    int i =0;
    for (i=0;i<ZISE_ARR;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
