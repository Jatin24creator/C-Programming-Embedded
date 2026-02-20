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
    int a,b, tens1, tens2;
    printf("Enter the first three digit number:");
    scanf("%d",&a);
    printf("Enter the second three digit number:");
    scanf("%d",&b);
    // find out the tens digit of first number
    tens1 = (a%100)/10; // 149 = 49 = 4 
    // find out the tens digit of the second number
    tens2 = (b%100)/10; 
    // condition to check them

    if (tens1>tens2){ //tens1 ; number 1 is greater
        //check which one is bigger and print the difference
        ((a/100)>(a%10))?printf("%d is the difference", (a/100)-(a%10)):printf("%d is the difference",(a%10)-(a/100)); //condition?true:false
        if((a/100)==(a%10)){
            printf("Difference is zero");
        }

    }else if (tens1<tens2) { // tens2 : number 2 is greater
        // check which one is bigger and print the difference
        ((b/100)>(b%10))?printf("%d is the difference",(b/100)-(b%10)):printf("%d is the difference",(b%10)-(b/100));
        if((b/100)==(b%10)){
            printf("Difference is zero");
        }
        
    }else{  // tens digits are same
        printf("INsufficient condition");
                
            }


}