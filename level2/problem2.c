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
 
 Question:  Write a loop program to print 5 to 1 on one by one. 
 
 Answer:  5 
   4 
   3 
   2 
   1 */
   #include<stdio.h>
   int main(){
     int i = 5;
     while(i!=0){
          printf("%d \n",i);
          i--;
     }
   }