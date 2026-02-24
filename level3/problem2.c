/*Question:  Get a number from user and subtract 5 to that number and print the 
result. Write your code inside the function. Do not Change the format. 
Example:  
Input :45 Output 40. Input:56789 Output:56784*/

#include<stdio.h>
int function (int num);
int main(){
    int num1, num2;
    printf("Enter the number: ");
    scanf("%d",&num1);

    num2 = function(num1);
    printf("%d",num2);
}
int function(int num){
    num = num -5;
    return num;
}