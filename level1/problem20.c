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
Question:  Get a three-digit number from user and make the ten’s digit as 0, 
then print it. 
Example:  
Input: 695 Output 605.    Input: 182 Output: 102*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    // take the number and divide by
    a = (a/100)*100+(a%10);
    printf("the corrected number is %d",a);
}