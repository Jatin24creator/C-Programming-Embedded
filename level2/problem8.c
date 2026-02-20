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
Question:  Write a loop program to print the two-digit even numbers, who’s sum of 
   digits are 6. 
 
 Answer:  24 
42 
60 */
   #include<stdio.h>
   int main(){
     int i = 10;
     while(i>9&&i<99){
         // check if the number is even
         if(i%2 ==0){
          if(((i%10)+(i/10))==6){
               printf("%d\n",i);
          }
         }
         i++;
     }
   }