/* sum of array*/
#include<stdio.h>
int sum(int arr[],int length);
int main(){
    int arr[] = {12,213,24,325,5,4,6,231,676,58,5785,123,5,214};
    int length = sizeof (arr)/ sizeof(arr[0]);
    int s = sum(arr,length);
    printf("%d", s);
}
int sum (int arr[], int length){
    int i,sumofarray = 0;
    for(i=0;i<length;i++){
        sumofarray = sumofarray +arr[i];
    }
    return sumofarray;
}