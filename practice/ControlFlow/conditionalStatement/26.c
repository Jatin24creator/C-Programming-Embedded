/*Write a program in C which is a Menu-Driven Program to perform a simple calculation.
Test Data :
10
2
3
Expected Output :
The Multiplication of 10 and 2 is: 20*/

#include<Stdio.h>
int main(){
    int num1, num2, option;
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the second number: \n");
    scanf("%d",&num2);

    printf("Enter the options to select:\n" 
        "1 for Addition\n"
        "2 for Substraction\n"
        "3 for Multiplication\n"
        "4 for Division\n");
    scanf("%d",&option);
    if(option ==1){
        printf("The addition is %d", num1+num2);
    }
    else if (option ==2){
        printf("The substraction is %d", num1-num2);
    } 
    else if(option ==3){
        printf("The Multiplication  is %d", num1*num2);
    }
    else if(option ==4){
        printf("The Division is  %d", num1/num2);
    }
    else{
        printf("Invalid Option");
    }
    
}