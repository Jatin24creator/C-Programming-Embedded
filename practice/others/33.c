//Count Frequency of Each Element in Array

#include<Stdio.h>
int main(){
    int arr[] = {12,12,13,12,42,42,24,42,24,5,5,6,7,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length];
    int i;

    // set all the values in the freq array to -1;
    for(i = 0; i<length;i++){
        freq[i]=-1;
    }

    // start to going through the main array and start counting

    for (i =0; i<length; i++){
        int count =1; //starts from 1 
        for (int j = i+1;j<length;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0; // mark as counted
            }
        }
        if(freq[i] !=0){
            freq[i] =count; // set the freq [0] = count
        }
    }

    // printing out the output and the frequency of the elements
    for (i = 0; i<length;i++){
        if(freq[i]!=0){
            printf("%d has frequency %d\n", arr[i],freq[i]);
        }
    }
}