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
Question:  Get a three-digit number from user and print sum the digits. 
Example:  
Input: 562 Output 13. Input: 469 Output: 19 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include<stdio.h>
int main(){
    int a,c,d;
    printf("Enter the three digit number: ");
    scanf("%d",&a);
    c =a;
    d = a;
    a = a/100; //5
    c = c%100; //62
    c= c/10; //6
    d = d%10; //2
    a = a+c+d;
    printf("The sum of the digits is %d",a);

}