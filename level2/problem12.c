/********************************* 
#include<stdio.h> 
int main () 
{ 
 int x; 
           // Your Code here 
 loop: if(x < 6)  
           { 
      // Your code here. 
      goto loop; 
           } 
} 
***************************************** 
 
Question:  Write a program to get a number from user and print the sum of all 
digits. 
Answer: 
Input: 123456   - Output – 21 
Input: 76895439 - Output – 51 
Input: 675 – Output - 18 */

#include<stdio.h>
int main(){
     int enteredNum,i =10,sum=0,c;
     printf("Enter the number:");
     scanf("%d",&enteredNum);
     //find out number of digits
     c= enteredNum;
     while(enteredNum/i!=0){ // 123/10 == 12, 123/100=1,
          // divide the c by 10 and remainder is added in the sum
          sum = sum + (c%10);
          // c = c/10 (quotient); which changes the number
          c = c/10; 
          // increases the condition for the while to break
          i = i*10; 
     } 
     // bug: only counted till a few and otherwise left the first digit
     i = i/10; // here i == number of zero as digit but need to reduce otherwise on division the quotient will be 0
     sum  = sum + (enteredNum/i); // 

     printf("%d",sum);
}
