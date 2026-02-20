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
 
Question:  Write a loop program to print the two-digit odd numbers, below 20. 
 
 Answer:  11 
13 
15 
17 
19*/
   #include<stdio.h>
   int main(){
     int i =10;
     while(i>9 && i <20){ // put a hard limit
          // check if even
          if (i%2 ==0){
               i++;
          }else {
               printf("%d \n", i);
               i++;
          }
     }
   }