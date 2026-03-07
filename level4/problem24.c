/*Question:  Program to print the sum of all TWO digit Prime numbers 
Answer: 1043*/
#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 10; i<100; i++){
        int isPrime = 1;
        for (int j = 2; j<i;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if( isPrime ==1){
            sum = sum+i;
        }
    }
    printf("%d",sum);
}