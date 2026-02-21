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
 
Question:  Write a program to get a number from user print the total number of  
digits in that number 
Answer: 
Input : 123456   -  Output – 6 
Input : 76895439- Output – 8 
Input : 675 – Output - 3*/
#include<stdio.h>
int main(){
  int enteredNumber,i=10,counter=1;
  printf("Enter any number: ");
  scanf("%d",&enteredNumber);
  //printing the total number in a number 
  while(enteredNumber/i!=0){ // divide the number by 10,100,1000 until i becomes larger and fails the condition as it becomes zero making it break the while loop
    i = i*10; // increment the i in the multiple of 10
    counter ++; // keeps track of the numbers
  }
  printf("%d",counter);
}
