/*Question:  Print the Largest Four digit prime number 
Answer: 9973*/
#include<stdio.h>
int main(){
    int large =0;
    for(int i = 9999; i>999;i--){
        int isPrime =1;
        for(int j = 2; j <i; j++){
            if(i%j == 0){
                isPrime =0;
                break;
            }
        }
        if(isPrime ==1){
            large = i;
            break;
        }
    }
    printf("%d",large);
}