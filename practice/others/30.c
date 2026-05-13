#include<stdio.h>
#include<limits.h>

int main(){
    int arr[] ={976546,546535,543346,6754,6588,96742,345,32,4333};
    int length = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;

    int i;
    for(i = 0; i < length; i++){
        if(arr[i] < smallest){
            secondsmallest = smallest;   // shift previous smallest
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest && arr[i] != smallest){
            secondsmallest = arr[i];
        }
    }

    printf("%d is the smallest; %d is the second smallest", smallest, secondsmallest);
}