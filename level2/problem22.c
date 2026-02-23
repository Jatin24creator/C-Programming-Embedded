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
 
Question:  Write a program get number from user print the total number of two-digit 
odd numbers in the number. 
Answer:  
Input: 12345678   - Output: 3 
Input: 987531   - Output: 4*/

#include<stdio.h>
int main(){
     int enteredNum,count=0;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);

     while(enteredNum>0){ //
          if ((enteredNum%100)>9&&(enteredNum%100)<100&&(enteredNum%100)%2!=0){ // check if the remainder is odd and check if the number is two digit
               count ++; // increment the value of count
          }
          enteredNum = enteredNum/10; //  Reduces the last digit of the number: 12345678=1234567
          //printf("%d",enteredNum); //for debugging while
     }
      printf("%d",count);
}
