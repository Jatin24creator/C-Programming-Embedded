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
 
Question:  Write a loop program to print sum of 1 to 5. 
 
 Answer:  15  */
   #include<stdio.h>
   int main(){
     int i = 1, sum =0;
     while(i!=6){ // run until the condition is met
          sum  = i + sum; // sum = 1, 1+2, 2+3, 3+2 ..
          i++;
     }
     printf("%d", sum);
   }