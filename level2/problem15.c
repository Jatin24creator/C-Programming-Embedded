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
 
Question:  Write a program to get a number from user and if the last digit of the 
number is even print the same number. If the last digit of the number is 
odd then subtract 1 from the last digit and print the number.  
(Note: Last digit -MSB) 
Answer: 
Input : 123456   -  Output – 123456 
Input : 96895439- Output – 86895439 
Input : 675 – Output - 575*/

#include<stdio.h>
int main(){
     int enteredNum,i=10;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);
     while(enteredNum/i!=0){//determine the number of digits
          i = i*10;
     } //1,000,000
     i = i/10; // 
      printf("%d\n",i);
     //check if even or  not? if yes = print same number
     // (enteredNum%10)%2 ==0  (check if remainder or last digit is even or not)
     // ((enteredNum/i)-1)*i + (enteredNum%i) (quotient - 1)* the number of digit place + add remainder to get the original number: MSB
     ((enteredNum%10)%2 ==0)?printf("%d is the new number",enteredNum):printf("%d is the new number", ((enteredNum/i)-1)*i + (enteredNum%i));
    
}