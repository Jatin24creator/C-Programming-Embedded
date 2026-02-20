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
 
Question:  Write a loop program to print the sum of two-digit odd numbers, whose  
   ten’s digit is 7. 
 
 Answer:  375*/
   #include<stdio.h>
   int main(){
     int i = 10,sum = 0;
     while(i>9&&i<100){
      if((i%2)!=0){
        if((i/10)==7){
            sum = sum +i;
        }
      } i++;
     }
     printf("%d",sum);
   }