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
Question:  Get two 2-digit numbers from user. Print the sum of digits of the biggest number.  
Example:  
Input: 56 78 – Output: 15 
Input: 14 65 - Output:  11 */

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first two digit number:");
    scanf("%d",&a);
    printf("Enter the second two digit number:");
    scanf("%d",&b);
    // check which number is the largest
    if(a>b){ // a is the greatest
        a = a/10; // quotient
        b = a%10; // remainder
        a= a+b;
        printf("%d is the sum",a);
    }else if (a<b){ // b is greatest
        a = b/10;
        b = b%10; 
        a = a+b;
        printf("%d is the sum",a);
    }
    else { // both equal
        a = b/10;
        b = b%10; 
        a = a+b;
        printf("%d is the sum",a);
    }
    printf("the corrected number is %d",a);
}