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
Question:  Get a three-digit number from user and make the one’s digit as 2, 
then print it. 
Example:  
Input: 695 Output 692.    Input: 182 Output: 182*/

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    a = a/10; //69
    a = a*10 +2; 
    printf("the corrected number is %d",a);
}