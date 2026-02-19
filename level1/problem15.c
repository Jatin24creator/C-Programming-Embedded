/********************************* 
#include<stdio.h> 
int main () 
{ 
int x,y; 
printf(“Enter Number : “); 
scanf(“%d”,&x); 
// Your Code Here 
printf(“Result = %d”,y); 
} 
***************************************** 
Question:  Get a four-digit number from user and only reverse the  
first two digits of the number, then print the number. 
Example:  
Input: 9561 Output 9516.    Input: 3859 Output: 3895*/

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the four digit number: ");
    scanf("%d", &a);
    //divide the number by 100; take the remainder to b
    b = a%100; // 61
    a = a-b; // 9500
    // divide number b by 10 
    c = b/10; // quotient 6
    b = b%10; // remainder 1
    b = b*10 + c; // reversed number 61
    a = a + b; // reversed number

    printf("%d is the number\n", a);

    return 0;
}
