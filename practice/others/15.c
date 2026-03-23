// Finding largest element in an array
#include<Stdio.h>
int main(){
    int arr[] = {2,3,5,6,7,8,78,769869,23};
    int length = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int i;
    for(i = 0; i<length;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("%d element of arrary is the largest", largest);
}