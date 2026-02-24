/*Question:  Write a program to get two numbers from user and print the LCM of 
those numbers.*/
#include<stdio.h>
int main(){
    int num1,num2,max,lcm;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    // find out the max
    max = (num1>num2) ? num1:num2 ; // check the greatest number
    lcm = max; // 
    while(lcm%num1!=0 || lcm%num2 !=0){
        lcm = lcm +max;
    }
    printf("%d",lcm);
    
}