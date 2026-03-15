/*Write a  C program that calculates the compound interest for 
a given principal, amount, interest rate, and time period. 
Use a do while loop to allow the user to input
values multiples times*/
#include<Stdio.h>
int main(){
    int num1, status = 1;
    printf("Enter the number: ");
    scanf("%d",&num1);
    do{
        int principal, interest, time;
        printf("Enter Amount");
        scanf("%d",&principal);
        printf("\nEnter Interest");
        scanf("%d",&interest);
        printf("\nEnter Time");
        scanf("%d",&time);
    

    }while(status==1);
}