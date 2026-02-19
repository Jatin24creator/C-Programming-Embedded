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
Question:  Get a four-digit number from user. If the sum of the ten’s digit and 
hundred’s digit is greater than 10, then print “Success”, otherwise print 
“Failure”. 
Example:  
Input: 7529 – Output: Failure.    Input: 9386 - Output:  Success. */

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b = (a%100)/10; // 7529 = 29 remainder  = 2
    c = (a/100)%10; // 7529 = 75 = 5
    ((b+c)>10)?printf("Success"):printf("Failure");
}