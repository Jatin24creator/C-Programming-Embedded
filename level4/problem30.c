/*Question:  Print the Largest eight-digit prime number 
Answer: 99999989 */
#include<Stdio.h>
int main(){
    int large = 0;
    for(int i =99999999; i>9999999; i--){
        int isPrime = 1;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime ==1){
            large =i;
            break;
        }
    }
    printf("%d",large);
}