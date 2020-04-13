#include <stdio.h>
#include <stdlib.h>
#define ZISE_ARR (10)
int arr[ZISE_ARR]={0,1,3,5,7,9,2,4,6,8};

void tangDan(int arr[]){
    int i,j;
    for(i=0;i<SIZE_ARR-1;i++){
        for(j=i+1;j<SIZE_ARR;j++){
            if(arr[i]>arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int i =0;
    for (i=0;i<ZISE_ARR;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
