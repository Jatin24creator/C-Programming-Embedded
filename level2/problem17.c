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
 
Question:  Write a program to get a number from user, print whether that number is 
prime, and sum of digit is equal to 14. 
Answer:  
Input: 59   - Output: Prime & Sum of Digits is 14 
Input: 77   - Output: Not Prime but sum of digits is 14 
Input: 13 - Output: Prime, but sum of Digits is not 14*/
#include<stdio.h>
int main(){
     int enteredNum,sum,status;
     printf("Enter the two digit number: ");
     scanf("%d",&enteredNum);

     // check sum of the digits 
     sum = (enteredNum%10) +(enteredNum/10);


     for (int divisor = 1; divisor<enteredNum; divisor++){ // check prime
          if(enteredNum%divisor == 0 && divisor !=1 ){ // not prime 
               status =0;
               break;
               
          }else{ // prime 
               status =1;
          } 
     }

     if (status == 1&& sum ==14){ // prime &sum =14
          printf("Prime and sum is 14");
     }else if(status==1 && sum !=14){ // prime & sum!=14
          printf("Prime but sum not 14");
     }else if (status ==0 && sum ==14){ // not prime & sum = 14
          printf("Not prime but sum 14");
     }else { // not prime& sum =14
          printf("Not Prime and Sum also not 14");
     }

}
