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
Question:  Get a number from user and subtract 5 from that number if the number 
is odd, then print the result. Do not use “if”. 
Example:  
Input: 695 Output 690.    Input: 182 Output: 182*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    a = ((a%2)==0?a:a-5); // ternary operator (condition ? value_if_true : value_if_false;)
    printf("the corrected number is %d",a);
}