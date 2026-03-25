// reverse of an array 
#include<stdio.h>
int main(){
    int arr[] = {12,23,4,435,5,76,658,658};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    for(int i =length-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}