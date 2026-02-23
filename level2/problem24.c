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
 
Question:  Write a program get number from user print the total number of two-digit 
perfect square numbers in the number. 
Answer:  
Input: 163496481   - Output: 4 
Input: 364925   - Output: 4 */
#include<stdio.h>
#include<math.h>
int main(){
    int enteredNum,count=0;
    printf("Enter the number: ");
    scanf("%d",&enteredNum);

    while(enteredNum>0){

        if (sqrt(enteredNum%100) == (int)sqrt( enteredNum%100) && enteredNum%100 <100 && enteredNum%100>9){
            count++;
        }

        enteredNum = enteredNum/10; //reduce the number
    }
    printf("%d",count);
}