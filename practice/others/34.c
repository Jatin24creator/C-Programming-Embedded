//print distinct elements
#include<Stdio.h>
int main(){
    int arr[] = {23,23,24,24,12,12,2,3,23,24};
    int length = sizeof(arr)/sizeof(arr[0]);
    int i;
    int freq[length];
    for (i = 0;i<length; i++){
        freq[i]=-1;
    } 
    for (i = 0; i<length; i++){
        int count = 0;
        for(int j =0; j<length; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(arr[i]!=0){
            freq[i] =count;
        }
    }

    for(i =0;i<length;i++){
        if(freq[i]==1){
            printf("%d\n",arr[i]);
        }
    }
}