// sort elements of the array

#include<stdio.h>
int main(){
    int arr[] ={121,24,6,3,51,245,24};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i = 0;i<length;i++){ // runs from index 0
        int temp = arr[i]; // stores the value temporarily
        for(int j = i+1;j<length;j++){ // runs from index 1
        if(arr[i]<arr[j]){
            arr[i] = arr[j];
            arr[j] = temp;
           }
        }
    }

    // print the elements
    for(i = 0;i<length; i++){
        printf("%d\n", arr[i]);
    } 
}