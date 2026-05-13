// Count Frequency of Each Element in Array

#include<Stdio.h>
int main(){
    int arr[] = {12,32,12,12,23,23,23,43,32,32,23,12};
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length];
    int i;
    // initialize freq array with 
    for (i = 0; i<length;i++){
        freq[i]= -1;
    }
    for(i= 0; i<length; i++){
        int count = 1;
        for (int j = i+1; j<length;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for (i = 0;i<length;i++){
        if(freq[i]!=0){
             printf("%d,%d\n",arr[i],freq[i]);
        }
       
    } 
}