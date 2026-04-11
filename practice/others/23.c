// finding the smallest element in an array
#include<stdio.h>
int main(){
    int arr[] = {12,24,436,457,64,857,876,0,97,80,89,789,325};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i;
    int smallest = arr[0];
    for(i =0;i<length; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("%d",smallest);
}