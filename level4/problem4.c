/******************************** 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The digit in Tens position is %d\n",y); 
} 
***************************************** 
Question:  Get a Three digit number from user and print the digit in “Tens”     
position 
Example: 
User Enters “738” 
Answer - 3*/
#include<Stdio.h>
int main(){
    int x,y;
    printf("Enter the three digit number:" );
    scanf("%d",&x);
    y = (x%100)/10;
    printf("%d is the tens digit in the number",y);
}
