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
Question:  Get a number from user and divide by the number by 6 and print the 
quotient.  
Example:  
Input: 45 Output 7. Input: 143 Output: 23  */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a = a/6; // / is the division operator in C, it divides the left operand by the right operand and assigns the result to the left operand.
    printf("the corrected number is %d",a);
}