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
 
Question:  Write a program get number from user print the total number digits 
which are odd in the number. 
Answer:  
Input : 12345678   -  Output : 4 
Input : 987531   - Output  : 5 */

#include<stdio.h>
int main(){
     int enteredNum,count =0;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);
     while(enteredNum>0){      // 12346578 = 12345678/10 
          if((enteredNum%10)%2 !=0){//odd
            count++;
          }
          enteredNum = enteredNum/10; // 1234567
          // printf("%d",enteredNum); //for debugging while
     }
     printf("%d",count);


}
