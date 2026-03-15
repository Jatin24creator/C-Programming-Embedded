/*Write a C program to find and print the first 10 Fibonacci numbers using a while loop.*/
#include<Stdio.h>
int main(){
    int num1 = 0; // Starts from 0 
    int num2 = 1; // Starts from 1
    int count =0; //
    while(count<10){ //  Set the counter to run from 0 to 9
        printf("%d\n",num1);  // print the result
        int next_term = num1 + num2; //  next term = 0+1 = 1, 1+1 = 2, 2+1=3
        num1 =num2; // 0 becomes 1;
        num2 = next_term; // 1 becomes 2
      
        count++; // increments the counter
    }

}