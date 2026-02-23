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
 
Question:  Write a program get number from user print the total number of single
digit perfect square numbers in the number. 
Answer:  
Input: 123456789   - Output: 3 
Input: 987531   - Output: 2*/

#include<stdio.h>
#include<math.h>
int main(){
     int enteredNum,count=0;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);
     while(enteredNum>0){
          //check if sqrt or not of the remainder
          if(sqrt(enteredNum%10) ==  (int)(sqrt(enteredNum%10))){
               count ++;
               //printf("%d",(int)(sqrt(enteredNum%10)));
          }else if(enteredNum == 1){
               count++;
          }
          enteredNum = enteredNum/10; // reduces each digit
     }
     printf("%d",count);
}
