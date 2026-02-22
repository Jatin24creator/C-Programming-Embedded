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
 
Question:  Write a program get number from user print whether that number is 
prime or not. 
Answer:  
Input : 31   -  Output : Prime 
Input : 27   - Output  : Not Prime.*/

#include<stdio.h>
int main(){
     int enteredNum,status ;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);

     // check if divisible by only 1 and the number itself 
      
     for (int i = 1; i<enteredNum;i++){ 
          if(enteredNum%i == 0 && i !=1 ){ 
               status = 0; // Not Prime
               break;
          } else {
               status = 1;
          }
       
     }
        (status == 1)?printf("Prime"):printf("NotPrime");
}