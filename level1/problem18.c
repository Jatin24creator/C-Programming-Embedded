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
Question:  Get a two-digit number from user and make the ten’s digit 1, 
then print it. 
Example:  
Input: 95 Output 15.    Input: 82 Output: 12*/

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    b = a%10; // 5
    a = a/10; // 9
    c = a; //9
    a = a-1; //8
    a = ((c-a)*10) + b; // 15
    printf("the corrected number is %d",a);
}