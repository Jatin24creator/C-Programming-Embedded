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
 
 Question:  Write a loop program to print the sum of two-digit numbers whose  
   one’s digit is 5. 
 
 Answer:  495*/
   #include<stdio.h>
   int main(){
     int i = 10, sum =0;
     while(i>9&&i<99){
          if(i%10 == 5){ //check if even
            sum = sum+i;
          }
          i++;
     }
     printf("%d\n",sum);
   }