// finding the frequency of the elements in an array
#include<Stdio.h>
int main(){
    int arr[] = {12,12,42,42,53,35,5,35,35,53,67,76,76,76,67};
    int length = sizeof(arr)/sizeof(arr[0]);

    // sort the array first

    for(int i = 0;i<length; i++){
        int temp = arr[i];
    
        for(int j = i+1; j<length;j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
       
        //printf("%d\n",arr[i]);
    }

    // now use a freq variable for the length of the array
}