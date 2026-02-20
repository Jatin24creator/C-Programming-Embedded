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
 
Question:  Write a loop program to print the two-digit odd numbers, who’s sum of 
   digits are 7. 
 
 Answer:  25 
43 
61  */
   #include<stdio.h>
   int main(){
     int i = 10;
     while(i>9&& i<100){
          // check if even
          if (i%2 ==0){
               i++; // increment
          }else { // odd
               //check if the sum of the digit is 7 or not
               (((i%10) +(i/10))==7)?printf("%d\n",i)&&i++:i++;
          }
     }
   }