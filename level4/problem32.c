/*Question:  Total number of prime numbers below 1,000,000 have the sum of their digits 
equal to 14? 
Example: 59.  5 + 9 = 14 */ 

// errors need fixing later stuck in a loop

#include<Stdio.h>
int main(){
    // Total number of prime numbers below 1,000,000 wih sum ==14
    int sum =0,count =0;
    for (int i =10 ; i <= 1000000; i++){ // runs from 10 to 1,000,000
        int isPrime=1,temp =i; // set the isPrime flag as true
        for (int j = 2; j<i;j++){ // for loop of numbers less than the number
            if(i%j ==0){ // check if divisible
                isPrime =0; // setFlag to not prime
                break;
            }
        }
        
        if(isPrime ==1){ // if Prime
             //printf("%d\n is prime",i);
            while(temp>0){
                sum = sum +temp%10;
                temp = temp/10;
            }
            if(sum ==14){
                count++;
            }
        }
        sum =0; // reset sum =0
    }
    printf("%d",count);
}