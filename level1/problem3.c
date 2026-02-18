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
Question:  Get a number from user and multiply 3 to that number and print the 
result. 
Example:  
Input: 45 Output 135. Input: 1200 Output: 3600 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a = a*3;
    printf("the corrected number is %d",a);
}