// counting distinct elements in an array
#include<stdio.h>
int main(){
    int arr[] = {12,12,1,21,21,214,12,12,1,21,21,214,3,4,5,7,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length];
    int i;

    // set freq to -1
    for(i=0; i<length;i++){
        freq[i] =-1;
    }

    // count the freq of elements and mark as  counted;
    for(i =0;i<length;i++){
        int count =1;
        for(int j = i+1;j<length; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    int count =0;
    // print the distinct values
    for(i=0;i<length; i++){
        
        if(freq[i]==1){
            count++;
        }
    }
    printf("%d\n",count);
}