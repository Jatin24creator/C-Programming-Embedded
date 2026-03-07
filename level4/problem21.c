/*Question:  Write a program to print the total number of TWO digit Prime numbers 
Answer : 21*/

#include<Stdio.h>
int main(){
    int count = 0;
    // two digit numbers 10 to 99
    for (int i = 10; i< 100; i++){
       int isPrime = 1;
       for (int j =2 ; j<i; j++){
        if(i%j ==0){
            isPrime = 0;
            break;
        }
       }
       if(isPrime ==1){
        printf("%d\n",i);
        count++;
       }
    }
    printf("Total number of prime numbers: %d",count);
    
}