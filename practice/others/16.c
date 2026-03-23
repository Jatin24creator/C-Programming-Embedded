//smallest element in an array
#include<Stdio.h>
int main(){
    int arr[] = {12,234,3,563,324,5,67,65,798,52};
    int length = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    int largest = arr[0];
    int i;
    for(i=0;i<length;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    printf("%d is the smallest element and %d is the largest",smallest, largest);
}