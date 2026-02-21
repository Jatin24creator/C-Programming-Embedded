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
 
Question:  Write a program to get a number from user and print the reverse of that 
number 
Answer: 
Input : 123456   -  Output – 654321 
Input : 76895439- Output – 93459867 
Input : 675 – Output - 576*/

#include<stdio.h>
int main(){
     //define the variables
     int enteredNum,i=10, counter=1, reverse =0;
     //take the number from the user
     printf("Enter the number to reverse: "); 
     //store the number value
     scanf("%d",&enteredNum);
     // initiate a while loop to identify the number of digits and assign the counter
     // this step also sets the number of zeroes for further 
     while(enteredNum/i!=0){ 
          i=i*10;//
          counter++;
     }
     i = i/10; // 100000
     printf("%d is the zeroes, %d is the digit counts\n",i, counter);
     while(counter!=0){
          reverse = reverse + ((enteredNum%10)*i);
          enteredNum = enteredNum/10; // 
          i = i/10; // decrement the 10000
          counter--;
     }
     printf("%d is the reversed number", reverse);
}
