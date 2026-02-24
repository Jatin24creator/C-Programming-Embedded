/*Question:  Write a program to get three numbers from user and print the LCM of 
those numbers. */

#include<stdio.h>
int main(){
    int num1, num2,num3,lcm,max;
    printf("Enter the first num: ");
    scanf("%d",&num1);
    printf("Enter the second num: ");
    scanf("%d",&num2);
    printf("Enter the third num: ");
    scanf("%d",&num3);
    
    max = (num1>num2)?num1:num2;
    max = (max>num3)? max:num3;
    lcm = max;
    while(lcm%num1!=0 || lcm%num2 != 0 || lcm%num3!=0){
        lcm = lcm +max;
    }
    printf("%d",lcm);
}