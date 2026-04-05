// sort in ascending order first half and descending order second half
#include<Stdio.h>
int main(){
    int arr[]= {12,4,5,4,36,567,356,53,657,64,756,456,856,8,128,75,89769,12};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",length);
    int i;
    for(i = 0; i<(length/2);i++){
        int temp = arr[i];
        for(int j = i+1; j<(length/2);j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\n",arr[i]);
    }
    for(i = length/2; i<length;i++){
        int temp = arr[i];
        for(int j = i+1;j<length;j++){
            if(arr[i]<arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d\n",arr[i]);
    }
}