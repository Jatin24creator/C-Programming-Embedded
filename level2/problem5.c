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
 
Question:  Write a loop program to print odd numbers 1 to 9. 
 
 Answer:  1 
   3 
   5 
   7 
   9*/
   #include<stdio.h>
   int main(){
     int i = 1;
     while(i!=10){ 
          if(i%2 == 0){ // checks if even
               i++; // increment for number
          }else {
               printf("%d\n",i); // prints the odd numbers
               i++; //increment for number 
          }
         
     }
   }