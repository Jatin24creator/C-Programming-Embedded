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
Question:  Get a two-digit number from user and make the one’s digit as 0, 
then print it. 
Example:  
Input: 95 Output 90.    Input: 18 Output: 10 */

#include <stdio.h>
int main(){
    int a;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    a = a - (a%10); //95 - 5
    printf("the corrected number is %d",a);
}