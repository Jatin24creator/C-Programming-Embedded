/*Question:  Write a program to print the sum of  single digit Prime numbers 
Answer: 18*/
#include<stdio.h>
int main(){
    int sum = 1; // as 1 is excluded from this
    for (int i =2; i<10; i++){
        int isPrime = 1;

        for (int j = 2; j<i; j++){
            if(i%j ==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            sum = sum +i;
            printf("%d\n",i);
        }
    }
    printf("%d",sum);
}