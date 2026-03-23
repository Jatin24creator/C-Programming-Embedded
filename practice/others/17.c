// second smallest
#include<Stdio.h>
int main(){
    int arr[] = {12,23,24,325,46,64567,57};
    int length = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    int second_smallest;
    int i;

    for(i=0;i<length;i++){
        second_smallest = smallest;
        if(smallest>arr[i]){   // smallest is the array 
            second_smallest = smallest;
            smallest = arr[i]; // secondsmallest
        }
    }

    printf("%d is the second smallest", second_smallest);
}