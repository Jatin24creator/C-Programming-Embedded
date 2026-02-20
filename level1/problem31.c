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
Question:  Get a three-digit number from user. If the sum of the digits is less than 10, then print 
the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, 
then print the sum, otherwise add the digits of the sum, and print the sum. 
Note: The result should be always single digit only. 
Example:  
Input: 123 – Output: 6 
Input: 149 -  Output:  5   (149:1+4+9 = 14: 1+4 = 5) 
Input: 991 -  Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1) */

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);

    b = (a/100)/*Quotient 1*/+(a%100)/10 /*Quotient 4*/ + (a%100)%10/*Remainder 9*/;

    if(b<10){ //condition 1
        printf("%d is the solution but less than 10",b);

    } else if(b>=10){
        
        c = b/10; // takes the quotient
        b = b%10;
        b = b+c;
        if(b%10 == 0){
            b = b/10;
            printf("%d is the solution",b);
        } else{
            printf("%d is the solution",b);
        }
    }

}