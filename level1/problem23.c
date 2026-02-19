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
Question:  Get a two digit number from user and subtract 5 from that number if the 
sum of the digits of the number is odd, then print the result. Do not use 
“if”. 
Example:  
Input: 95 Output 95.    Input: 72 Output: 67*/

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b =a;
    a = (a%10) + (a/10); //95 =
    a = (a%2==0)?b:b-5;
    printf("the corrected number is %d",a);
}