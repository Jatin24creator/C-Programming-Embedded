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
Question:  Get a three-digit number from user and print the reverse of the number. 
Example:  
Input: 561 Output 165.    Input: 859 Output: 958*/

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter the three digit number: ");
    scanf("%d", &a);
    // assign the same number to the other variables
    
    // divide the number with 100 and note down the quotient
    c = a/100; // quotient 5
    //divide the number with 100 and note down the remainder
    a = a%100; //remainder 61
    //note down the middle number by dividing by 10 and one is quotient
    b = a/10; // quotient 6
    // note the down the remainder by dividing by 10 
    a = a%10; // remainder 1
    // reverse the number
    a = a*100+b*10 +c;



    printf("%d is the number\n", a);

    return 0;
}
