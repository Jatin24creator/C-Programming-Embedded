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
Question:  Get a four-digit number from user and subtract 5 from that number if 
ten’s digit position and 100’s digit position is same, then print the result. 
Do not use “if”. 
Example:  
Input: 7595 Output 7595.    Input: 3772 Output: 3767*/

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the four digit number:");
    scanf("%d",&a);
    b = (a%100)/10; // 3772 = 72 = 7
    c = (a%1000)/100; // 3772 = 772 = 7
    a = (b == c)?a-5:a;
    printf("the corrected number is %d",a);
}