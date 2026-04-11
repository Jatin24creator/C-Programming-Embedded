// average of elements in an array
#include<Stdio.h>
int main(){
    long long int arr[] = {12432546567,12354657678654,345478906,5432234256432413,4675867901324354678,634};
    int length = sizeof(arr)/sizeof(arr[0]);

    long long int average;
    long long int sum = 0;

    int i;
    for(i =0;i<length;i++){
        sum = sum+arr[i];
    }
    average = sum/length;
    printf("%lld",average);
}