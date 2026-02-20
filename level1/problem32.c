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
Question:  Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
print the sum, otherwise print the difference.  
Example:  
Input: 56 78 – Output: 22 
Input: 14 65 - Output:  79 */

#include <stdio.h>
int main(){
    int a,b,sum,diff;
    printf("Enter the first two digit number:");
    scanf("%d",&a);
    printf("Enter the second two digit number:");
    scanf("%d",&b);
   
    sum = a+b;
    if(sum<100){
        printf("%d is the sum",sum);

    } else {
          // check the number which one is greater
         if(a>b){
           // a is greatest
            diff = a-b;
         }else if(a<b){
            // b is greatest
            diff = b-a;
         }else{
            diff = 0; // both equal
         }
        printf("%d is the difference",diff);
    }
}