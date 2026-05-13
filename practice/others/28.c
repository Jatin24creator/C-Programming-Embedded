// reverse an array
#include<stdio.h>
int main(){
    int arr[] = {12345,1534,123325,1235254,354213,5343253,4354};
    int length = sizeof(arr)/sizeof(arr[0]);
    int arr2[length];
    int i;
    for (i = 0;i<length; i++){
        int temp = length-1;
        arr2[temp-i]=arr[i];
        //printf("%d\n",arr2[temp-i]);
    }
    for(i = 0;i<length; i++){
        printf("%d\n",arr2[i]);
    }
}