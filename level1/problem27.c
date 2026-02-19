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
Question:  Get a three-digit number from user. If the sum of the digits is 10 then 
print “Success”, otherwise print “Failure”. 
Example:  
Input: 956 - Output Failure.    Input: 127 - Output:  Success. */

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    b = a/100; // 956 = 9
    c = (a%100)/10; // 956 = 56 = 5
    a = (((a%100)%10 + b + c)==10)?printf("Success"):printf("Failure"); // 956 = 56 =6 +5+9 ==10? true:false
}