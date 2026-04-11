// Find the largest element in an array
#include<Stdio.h>
int main(){
    //without sorting
    int arr[] = {12,234,124,545,3,6,5,76,58768,7,9679789,435346};
    int length = sizeof(arr)/sizeof(arr[0]);
    int largest = 0;
    for (int i = 0; i<length;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("%d",largest);
}