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
Question:  Get a three-digit number from user and subtract 5 from that number if 
one’s digit number and 100’s digit number are same, then print the 
result. Do not use “if”. 
Example:  
Input: 595 Output 590.    Input: 372 Output: 372*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    a = (a/100 == a%10)? a-5: a;
    printf("the corrected number is %d",a);
}