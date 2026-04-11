// sum of elements
#include<Stdio.h>
int main (){
    int arr[] = {123,124,32,543,64,57,56,867,97890,785,68754321,23456,76543213,459876,543,21,34567};
    int length = sizeof(arr)/sizeof(arr[0]);

    int i;
    int sum = 0;
    for(i=0;i<length;i++){
        sum  =sum +arr[i];
    }
    printf("%d",sum);
}