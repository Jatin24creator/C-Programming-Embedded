/*Question:  Write a program to print the total number of  single digit Prime numbers 
Assume 0 & 1 are not Prime. 
Answer : 4 */
#include<Stdio.h>
int main (){
    int count = 0,x =0;
    for (int i = 1; i <10; i++){ // run for each number
        x =0;
        for (int j = 1; j <i; j++) // check if divisible by any number
        {
            if(i%j == 0 && j !=1){ // if divisibile and number is not 1
                x =0;
                break;
            } else if ( j!=1 && j!=0) { // not divisible and number is 1
                x =1; //prime
            }
        }
       
        if(x==1){
             printf("%d\n",i);
            count++;
        }
    }
    printf("%d",count);
}