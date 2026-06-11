//Sorting elements of an array by frequency : C | C++ | Java | Python
#include<Stdio.h>
int main(){
    int arr[] = {12,12,3,3,3,3,3,4,5,54,5,4,5,45,54,54,3,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int freq[length];

    int i;

    // set the freq to -1;
    for(i=0;i<length;i++){
        freq[i]=-1;
    }

    //count the frequency and mark them as counted

    for(i =0; i<length; i++){
        int count =1; // set the count to 1 as i
        for(int j =i+1; j<length; j++){
            if(arr[i]==arr[j]){ // check if equal
                count++;
                freq[j]=0; // marked as counted
            }
        }
        if(freq[i]!=0){
            freq[i] = count;
        }
    }

    // print the elements as per frequency
    printf("Unsorted Frequency of the elements: \n");
    for(i =0;i<length;i++){
        if(freq[i]!=0){
            printf("%d has frequency %d\n", arr[i],freq[i]);
        }
    }
    printf("\n");
    printf("Sorted Frequency of the elements: \n");
    
    // sort the elements as per the frequency;
    for(i=0;i<length;i++){ 
       if(freq[i]!=0){
         for(int j = i+1;j<length;j++){
            if(freq[i]<freq[j]){
                int temp2 = freq[i];
                freq[i] = freq[j];
                freq[j] = temp2;

                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
       }
    }

      for(i =0;i<length;i++){
        if(freq[i]!=0){
            printf("%d has frequency %d\n", arr[i],freq[i]);
        }
    }
}