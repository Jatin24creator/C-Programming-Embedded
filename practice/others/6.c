/* A Strong Number is a number whose sum of factorial digits is equal to the number itself.
Ex:- number is 145
1! + 4! + 5! = 145 
So it is a strong number.*/

#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number to check if it's a strong number: ");
    scanf("%d",&num);
    int check = num;
    // break down the number into digits
    while(num>0){ 
        // calculate the factorial of each digit
        int factor = 1;
        for(int i = num%10; i>0;i--){
            factor = factor*i;
        }
        sum =sum +factor;
        num = num/10;
    }
    (sum==check)? printf("Strong Number"):printf("Not Strong Number");
}