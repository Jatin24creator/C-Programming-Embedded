// Second Smallest element of array
#include<stdio.h>
int secondsmallest(int arr[],int length);
int main(){
    int arr[] = {124,567,657,567,8,52,4,8,94,1,654};
    int length = sizeof(arr)/ sizeof(arr[0]);

    int ss = secondsmallest(arr,length);
    printf("%d", ss);
}

int secondsmallest(int arr[],int length){
    int smallest = arr[0];
    // find out the smallest
    int i;
    for(i = 0; i<length;i++){
        if(arr[i]<smallest){
            smallest = arr[i]; // set smallest to 
        }
        else if(smallest<secondsmallest && secondsmallest != smallest){
            seo
        }
    }
    // make a second smallest variable
}