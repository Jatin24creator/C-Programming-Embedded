// find repeating elements in an array
#include<stdio.h>
int main(){
    int arr[] = {123,123,1532,1532,2,12,5,2468,1,2,2468,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[n];
    int i;

   // set the freq array to -1;
   for(i=0; i<n; i++){
    freq[i]=-1;
   }

   //count and mark the elements
   for(i=0;i<n;i++){
    int count =1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
            freq[j]=0; //mark as counted 
        }   
    }
    if(freq[i]!=0){
        freq[i] =count;
    }
   }

   // print the repeating elements in the array
   printf("Repeating Elements:\n");
   for(i=0;i<n; i++){
    if(freq[i]!=0 && freq[i]>1){
        printf("%d\n",arr[i]);
    }
   }
}