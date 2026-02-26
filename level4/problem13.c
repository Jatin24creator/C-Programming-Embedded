/******************************** 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter the Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The sum of the digits of entered number is %d\n",y); 
} 
***************************************** 
Question:  Get a number from the user and print the sum of all digits. 
Example: 
User Enters “123456” 
Answer - 21*/
#include<stdio.h> 
int main() 
{ 
int x,y =0; 
printf("Enter the Number : "); 
scanf("%d",&x); 
// Your Program Here 
while(x>0){
    y = y+ x%10;
    x= x/10;
}
printf("The sum of the digits of entered number is %d\n",y); 
} 
