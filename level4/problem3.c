/********************************* 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The digit in Ones position is %d\n",y); 
} 
***************************************** 
Question:  Get a Three digit number from user and print the digit in “Ones”     
position 
Example: 
User Enters “738” 
Answer - 8*/

#include<Stdio.h>
int main(){
    int x,y;
    printf("Enter the three digit number: ");
    scanf("%d",&x);
    y = x%10;
    printf("The digit in ones position is %d\n",y);
}