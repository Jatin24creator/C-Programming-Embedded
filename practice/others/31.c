//Find Largest & Smallest Element in an Array (single traversal)
#include<Stdio.h>
int main(){
    int arr[] = {54365,235356,234354,23,5325,246,35475865,84578456,8324};
    int length = sizeof(arr)/sizeof(arr[0]);

    int smallest = arr[0];
    int largest = arr [1];
    int i;
    for(i =0;i<length;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }else if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("%d is the smallest, %d is the largest",smallest, largest);
}