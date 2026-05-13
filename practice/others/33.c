// Count Frequency of Each Element in Array

#include<Stdio.h>
int main(){
    int arr[] = {12,12,21,21,12,3};
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length] ;
    int i;

    for(i = 0; i<length;i++){ 
        printf("%d has frequency ",arr[i]); //12
        freq[i] = 1; // sets the value at 1
        for(int j = i+1;j<length;j++){
            // check if any element equal to arr[0]
            if(arr[i]==arr[j]){
                freq[i] += 1;
                //printf("%d,\n",freq[j]); 
            }
        }
        printf("%d\n", freq[i]);
    }

}