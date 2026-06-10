// frequency of the user input array
#include<Stdio.h>
int main(){
    int arr[100], freq[100];
    int n,i,j,count;
    // input array size
    printf("Enter the size of the array \n");
    scanf("%d\n",&n);

    // input array elements
    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }

    // count and mark the frequency
    for(i=0;i<n;i++){
        count =1;
        for(j = i+1; j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0; // mark as counted
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    // print the output

    for(i = 0; i<n;i++){
        if(freq[i]!=0){
            printf("%d has a frequency %d\n", arr[i],freq[i]);
        }
    }
}