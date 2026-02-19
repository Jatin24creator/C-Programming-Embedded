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
Question:  Get a two-digit number from user. If the sum of the digits is 10 then print 
“Success”, otherwise print “Failure”. 
Example:  
Input: 56 - Output Failure.    Input: 37 - Output:  Success*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a = (((a%10)+(a/10))==10)?printf("SUCCESS"):printf("Failure"); // remainder + quotient == 10? true:false
}