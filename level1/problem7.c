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
Question:  Get a two-digit number from user and print the ten’s digit. 
Example:  
Input: 45 Output 4. Input: 56 Output: 5 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    a = a/10; // prints the quotient
    printf("the corrected number is %d",a);
}