/*
******************************** 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter the Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The reverse of the entered number is %d\n",y); 
} 
***************************************** 
Question:  Get a number from the user and print the reverse of it. 
Example: 
User Enters “123456” 
Answer - 654321 */
#include<stdio.h>
int main() 
{ 
int x,y=0; 
printf("Enter the Number : "); 
scanf("%d",&x); 
// Your Program Here 
while(x>0){
    y = (y + (x%10))*10;
    x= x/10;
}
y = y/10;
printf("The reverse of the entered number is %d\n",y); 
} 
