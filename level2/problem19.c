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
 
Question:  Write a program to get a 4-digit number from user, print whether that 
number’s middle two digits (hundred’s digit and ten’s digit) is prime. 
Answer:  
Input: 6359   - Output: Not Prime 
Input: 3517   - Output: Not Prime */

#include<stdio.h>
int main(){
     int enteredNum, status;
     printf("Enter the four digit number: ");
     scanf("%d",&enteredNum);
     int middle = (enteredNum%1000)/10; // 6359 = 359 = 35

     for (int divisor = 1; divisor<middle;divisor++){ // check prime
          // if (divisible by any except 1 then not prime)
          if ( middle%divisor==0 && divisor !=1){
                status = 0;
               break;
          }else {
                status = 1;
          }
     }
     ( status ==1)?printf("Prime"):printf("Not Prime");
}
