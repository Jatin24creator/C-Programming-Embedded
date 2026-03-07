/*Question:  Write a program to print total number of THREE digit Prime numbers 
Answer - 143 */
#include<Stdio.h>
int main(){
    int count =0;
    // three digit prime numbers = 100 to 999
    for (int i = 100; i<1000; i++){ // starts from 100
        int isPrime =1; //  set the flag to be 1
        for (int j =2; j <i; j++){
            if(i%j == 0){
                isPrime = 0;
                break; // set the flag to 0 and break the loop for the number as divisiblee
            }
        }
        if(isPrime ==1){
            count++;
        }
    }
    printf("The prime numbers three digits are: %d",count);
}