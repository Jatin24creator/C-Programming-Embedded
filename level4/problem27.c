/*Question:  Print the largest Three digit prime number 
Answer: 997 */
#include<Stdio.h>
int main(){
    int greatest = 0;
    for(int i = 100; i <1000;i++){
        int isPrime = 1;
        for(int j = 2; j <i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1 && i >greatest){
            greatest = i;
            //printf("%d\n",i)
        }
    }
    printf("%d",greatest);
}