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
 
Question:  Write a program to get a number from user and interchange the first and 
last digits and print the result. 
Answer: 
Input : 123456   -  Output – 623451 
Input : 76895439- Output – 96895437 
Input : 675 – Output - 576*/

#include<stdio.h>
int main(){
     int enteredNum,i=10,result;
     printf("Enter the number: ");
     scanf("%d",&enteredNum);

     int lastdigit = enteredNum%10; // 6
     enteredNum = enteredNum/10; // 12345
     while(enteredNum/i!=0){
          i = i*10; // number of digits
     } // i = 100000
     i = i/10; //i = 10000
     result = (lastdigit*i)*10 + (enteredNum/i) + (enteredNum%i)*10;
     printf("%d",result);
}
