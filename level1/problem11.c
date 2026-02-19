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
Question:  Get a two-digit number from user and print sum the digits. 
Example:  
Input: 56 Output 11. Input: 69 Output: 15 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a,c;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    c=a;
    a = a/10; //quotient
    c = c%10; //remainder
    a = a+c;
    printf("the corrected number is %d",a);
}