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
Question:  Get a four-digit number from user. If the sum of the ten’s digit and 
hundred’s digit is equal to 10, and one of the digits is more than 7 then 
print “Success”, otherwise print “Failure”. 
Example:  
Input: 4649 – Output: Failure.    Input: 9286 - Output:  Success.*/

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the four digit number:");
    scanf("%d",&a); 
    b = (a%100)/10; //4649 = 49 = 4
    c = (a/100)%10; //4649 = 46 = 6
    ((b+c)==10&&(b>7||c>7))?printf("Success"):printf("Failure"); // 4+6 and (4>7 or 6>7)?success:failure

}