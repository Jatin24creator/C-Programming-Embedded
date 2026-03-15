/*Write a C program to reverse a given number using a do-while loop.*/
#include<Stdio.h>
int main(){
    int num1, reverse =0;
    printf("Enter the number: ");
    scanf("%d",&num1);
    do {
        reverse = (reverse + num1%10)*10;
        num1 = num1/10;
    } while(num1>0);
    reverse = reverse/10;
    printf("%d",reverse);
}