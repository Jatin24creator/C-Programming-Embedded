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
 
Question:  Write a program to get number from user, print whether that number’s 
first two digits (ten’s digits and one’s digit) is prime. 
Answer:  
Input: 359   - Output: Prime 
Input: 3577   - Output: Not Prime*/
#include<stdio.h>
int main(){
     int enteredNum,num,stat;
     printf("Enter the Number: ");
     scanf("%d",&enteredNum);
     num  = (enteredNum%100); //remainder
     for (int i =1;i<num;i++){
          if( num%i == 0 && i!=1 ){
               stat =0;
               break;
          }else {
               stat =1;
          }
     }
     (stat ==1)?printf("Prime"):printf("Not Prime");


}
