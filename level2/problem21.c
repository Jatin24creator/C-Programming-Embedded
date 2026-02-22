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
 
Question:  Write a program print total number of single digit Prime numbers 
Answer:  
4 */
#include<stdio.h>
int main(){
     int status, count = 1;
     for (int i = 1; i<10;i++){
          for(int j =2; j<i;j++){
               if(i%j==0){
                    status = 0;
                    break;
               }else if( i ==1){
                    status = 1;
               }
               else {
                    status =1;
               }
          }
          if(status ==1){
               count ++;
          }
     }
     printf("%d",count);
}