// sort the first half in ascending and second half in the descending order

#include<stdio.h>
int main(){
    int arr[] = { 456,571,9819,8357,468,19,81,687,6,84,4,1,89,4,87,6,51,948,41,619,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    int med_index = length/2;

        
  

    //printf("%d", med_index);
    // ascending for first half
    for(int i =0; i<med_index;i++){
        for(int j = i+1; j<med_index;j++){
            if(arr[i]>arr[j]){
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
    }

    // descending for the second half
    for(int i =med_index; i<length;i++){
        
        for(int j = i+1; j<length;j++){
            if(arr[i]<arr[j]){
                int temp2 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp2;
            }
        }
    }

    // printing the output

    for(int i = 0; i<length; i++){
        printf("%d\n", arr[i]);
    }
}