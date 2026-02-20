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
Question:  Write a loop program to print sum of 6 to 1. 
 
 Answer:  21 */
   #include<stdio.h>
   int main(){
     int i = 6, sum =0;
     while(i!=0){
          sum =i+sum; // sum = 6+0,5+6
          i--;
     }
     printf("%d \n",sum);
   }