/********************************* 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The digit in Hundreds position is %d\n",y); 
} 
***************************************** 
Question:  Get a Three digit number from user and print the digit in “Hundreds”     
position 
Example: 
User Enters “738” 
Answer - 7*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the three digit number: ");
    scanf("%d",&x);
    y =x/100;
    printf("%d is in the hundreds place",y);
}