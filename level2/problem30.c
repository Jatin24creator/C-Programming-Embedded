/*Question:  Write a program to get two numbers from user and print the HCF of 
those numbers.*/
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first num: ");
    scanf("%d",&num1);
    printf("Enter the second num: ");
    scanf("%d",&num2);
    
    
    int greatest = (num1>num2)? num1:num2;
    for (int i =2;  i<=greatest ; i++ ){
        if(num1%i == 0 && num2%i == 0){
            printf("%d is the HCF",i);
            break;
        }
    }
}