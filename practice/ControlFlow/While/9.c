/*Write a C program that implements a program to check if a given number is a palindrome using a while loop.*/
#include<Stdio.h>
int main(){
    int num1, reverse = 0;
    printf("Enter the number: ");
    scanf("%d",&num1);
    int temp = num1;
    while(num1>0){
        reverse = (reverse+ num1%10)*10; // 121 = 1*10 =10 +2
        num1 = num1/10;
    }
    reverse = reverse/10;
    printf("%d\n",reverse);
    
    if(reverse == temp){
        printf("Palindrome");
    }
}