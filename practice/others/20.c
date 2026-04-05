// sort an array
#include<Stdio.h>
int main(){
    int arr[] = {112,23,2344,45,567,657,89,6,8,6,2,86};
    int length = sizeof(arr)/sizeof(arr[0]);
    // length  = number of indexes in the array
    int i; // sets the index
    for(i = 0;i<length;i++){ // runs from 112 to 86
        // 112
        for(int j = i+1;j<length;j++){ // runs from 23 to 2344
            int temp = arr[i]; 
            if(arr[i]>arr[j]){// yahan agar puri array mey koi bhi number bada h toh uski i index par aa jata or j par i chala jata
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
        printf("%d\n",arr[i]);
    }
}