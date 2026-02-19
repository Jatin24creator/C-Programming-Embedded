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
Question:  Get a three-digit number from user. If the sum of the one’s digit and 
hundred’s digit is less than 10, then print “Success”, otherwise print 
“Failure”. 
Example:  
Input: 569 - Output Failure.    Input: 316 - Output:  Success.*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    ((a/100)+(a%10)<10)?printf("Success"):printf("Failure");
}