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
Question:  Get a number from user and divide by the number by 8 and print the 
remainder.  
Example:  
Input: 45 Output 5. Input: 143 Output: 7*/
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a = a%8;
    printf("the corrected number is %d",a);
}