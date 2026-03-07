/*Question:  Program to Print the sum of all THREE digit Prime numbers 
Answer : 75067 */
#include<Stdio.h>
int main(){
    int sum =0;
    for(int i =100; i<1000; i++){
        int isPrime = 1;
        for (int j = 2; j<i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime ==1){
            sum = sum +i;
        }
    }
    printf("%d",sum);
}