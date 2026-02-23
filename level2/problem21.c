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
which are prime in the number. 
Answer:  
Input : 12345678   -  Output : 4 
Input : 987531   - Output  : 4 */

#include<stdio.h>
int main(){
     int enteredNum,count =0,status;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);
     while(enteredNum>0){      // 12346578 = 12345678/10 
         
          for (int i = 2; i<(enteredNum%10);i++){ //  8 
               if ((enteredNum%10)%i ==0){ // check divisibility
                    status =0;
                    break;
               }
               else {
                    status = 1;
               }
          }
            if (enteredNum%10 <2){
               status = 0;
          }
             if(status == 1){
               count++;
             }
          enteredNum = enteredNum/10; // 1234567
          // printf("%d",enteredNum); //for debugging while

         
     }
     printf("%d",count);
}
