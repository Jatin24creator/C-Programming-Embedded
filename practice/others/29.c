// find the second largest number
#include<stdio.h>
int main(){
    int arr[] = {123,4325,436,5,758,67,9789068,9,798,667543,32465,7687,6756,354};
    int length = sizeof(arr)/sizeof(arr[0]);

    int largest =arr[0];
    int secondlargest =arr[1];

    for (int i=0; i<length;i++){
        if(largest <arr[i]){
            largest = arr[i];
        }
        else if(secondlargest<arr[i] &&secondlargest !=largest){
            secondlargest = arr[i];
        }
    }
    printf("%d is the largest, %d is the second largest",largest, secondlargest);
}