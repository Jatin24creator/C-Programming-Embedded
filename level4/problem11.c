/********************************* 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a FOUR digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The sum of the digits of entered number is %d\n",y); 
} 
***************************************** 
Question:  Get a Four digit number from the user and print the sum of all digits. 
Example: 
User Enters “7638” 
Answer - 24 */
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a FOUR digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x%10 + x/1000 + (x%100)/10 + (x/100)%10;
printf("The sum of the digits of entered number is %d\n",y); 
} 
