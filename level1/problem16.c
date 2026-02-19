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
Question:  Get a four-digit number from user and only reverse the  
last two digits of the number, then print the number. 
Example:  
Input: 9561 Output 5961.    Input: 3859 Output: 8359  */


#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);
    // take the number and divide by 1000
    b = a/100;  // 95
    c = a%100; // 61
    a = b/10;  //9
    b = b%10; //5
    a = (b*1000) + (a*100) +c;//5900 +61 = 5961


    printf("the corrected number is %d",a);
}