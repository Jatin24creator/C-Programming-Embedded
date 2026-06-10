//Count Distinct Elements in an Array

#include<Stdio.h>
int main(){
    // statically allocate a size of an array
    int arr[100],freq[100];
    int n,i,j, count;

    // enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    // enter the elements of the array;
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        freq[i]=-1;
    }

    // count the fequency of the array 
    for(i =0; i<n;i++){
        count = 1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0; // counted
            }
        }
        if(freq[i]!=0){
            freq[i] =count;
        }
    }

    // print the output
    for(i=0;i<n;i++){
        if(freq[i]==1){
            printf("Distinct Element is: \n");
            printf("%d\n",arr[i]);
        }
    }
}
