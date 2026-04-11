// print array in reverse order
#include<stdio.h>
int main(){
    int arr[] = {12345,43213456,4324567,5432,4532,445,68432,235};
    int length = sizeof(arr)/sizeof(arr[0]);

    int i;
    for(i = length-1; i>=0; i--){
        printf("%d\n",arr[i]);
    }
}