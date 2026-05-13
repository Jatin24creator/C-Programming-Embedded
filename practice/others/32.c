// check if an array is sorted or not
#include<stdio.h>
int main(){
    int arr[]= {1,2,34,56,78,654,789};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i;
    int flag = 0;
    
    for(i = 0;i<length;i++){
        for (int j = i+1; j<length;j++){
            //int temp = arr[i];
            if(arr[i]>arr[j]){
                flag=1;
                break;
            }

        }
    }
    
    (flag == 1)?printf("Unsorted"):printf("Sorted");
}