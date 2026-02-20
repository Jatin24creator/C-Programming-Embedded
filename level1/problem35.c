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
Question:  Get two 3-digit numbers from user. Print the difference between the one’s digit and 
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s 
digit 
Example:  
Input: 856 978 – Output: 1 
Input: 128 365 - Output:  2*/

#include <stdio.h>
int main(){
    int a,b,tens1,tens2;
    printf("Enter the first 3 digit number:");
    scanf("%d",&a);
    printf("Enter the second 3 digit number:");
    scanf("%d",&b);

    // find out tens1
    tens1 = (a%100)/10;

    // find out tens2
    tens2 = (b%100)/10;
    //check if tens1>tens2
    if(tens1>tens2){
        // first number's
        ((a/100)>(a%10))?printf("%d is the difference", (a/100)-(a%10)):printf("%d is the difference",(a%10)-(a/100));
    } else if(tens1<tens2){
        ((b/100)>(b%10))?printf("%d is the difference", (b/100)- (b%10)):printf("%d is the difference", (b%10)-(b/100));
    } else{
        printf("insufficient conditions");
    }


}