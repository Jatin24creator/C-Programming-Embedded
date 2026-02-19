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
Question:  Get a number from user and subtract 5 from that number if the number’s 
ten’s position digit is odd, then print the result. Do not use “if”. 
Example:  
Input: 685 Output 685.    Input: 89172 Output: 89167 */

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b = (a%100 - a%10)/10; // (85 - 5)/10 = 8
    a = (b%2==0)?a:a-5; //  condition?true:false;
    printf("the corrected number is %d",a);
}