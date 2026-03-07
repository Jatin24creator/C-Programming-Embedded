/*Question:  Print the Smallest Four digit prime number 
Answer: 1009 */
#include <Stdio.h>
int main(){
    int small =0;
    for (int i = 1000; i<10000;i++){
        int isPrime =1;
        for (int j = 2; j<i;j++){
            if(i%j ==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime ==1){
            small = i;
            break;
        }
    }
    printf("%d",small);
}