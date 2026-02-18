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
Question:  Get a three-digit number from user and print the one’s digit. 
Example:  
Input: 456 Output 6. Input: 569 Output: 9 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    a = a%10;
    printf("the corrected number is %d",a);
}