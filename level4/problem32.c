/*Question:  Total number of prime numbers below 1,000,000 have the sum of their digits 
equal to 14? 
Example: 59.  5 + 9 = 14 */ 

// errors need fixing later stuck in a loop

#include<Stdio.h>
int main(){
    int start = 10,count = 0,sum =0;
    while(start <1000000){ // while the number is less than the limit set
        int i = start; // set the temp variable for another while loop
        //check prime
        int isPrime =1;
        for (int j = 2; j<i; j++){
            if(i%j ==0){
                isPrime =0;
                break;
            }
        }
        if(isPrime ==1){ // if prime
            while(i>0){ // calculate the sum of digits
                sum = sum +i%10;
                i = i/10;
            }
            if(sum == 14){
                count++;
                        }
        }
        start++;
    }
    printf("%d",count);
}