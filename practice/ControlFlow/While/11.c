/*Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.*/
#include<stdio.h>
int main(){
    int num1, option =1;
    while(option){
        printf("Enter the option: \n"
        "1 for Multiplication Table Print\n"
        "2 for Exit\n");
        scanf("%d",&num1);
        if(num1 ==2){
            break;
        }
        else if(num1 == 1){
            int num2;
            printf("Enter the number: ");
            scanf("%d",&num2);
            int i = 1;
            while(i <=10){
                printf("%d\n",num2*i);
                i++;
            }
        }
        else{
            printf("Enter A Valid Option\n");
        }
    }
}