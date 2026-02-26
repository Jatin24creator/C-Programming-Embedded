/********************************* 
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
printf("The reverse of the entered number is %d\n",y); 
} 
***************************************** 
Question:  Get a Three digit number from the user and print the reverse of it. 
Example: 
User Enters “738”*/
#include<Stdio.h>
int main(){
    int x,y;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    y = (x%10)*100 + ((x/10)%10)*10 +x/100; // (123%10)*100 = 300, ((x/10)%10)*10 = 123=12=2=20, 1
    printf("%d",y);

}