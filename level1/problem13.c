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
Question:  Get a two-digit number from user and print the reverse of the number. 
Example:  
Input: 56 Output 65.    Input: 59 Output: 95*/

#include <stdio.h>

int main() {
    int a,b;

    printf("Enter the two digit number: ");
    scanf("%d", &a);

    // a = b 
    b = a;
    // divide the number by 10 and multiply the remainder by 10
    a = a%10; // remainder
    a = a*10;
    // divide the number by 10 and take the quotient
    b = b/10; 
    // add a and b
    a = a+b;

    printf("%d is the number \n", a);

    return 0;
}
