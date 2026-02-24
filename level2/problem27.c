/*
******************************** 
#include<stdio.h> 
int main () 
{ 
int x; 
// Your Code here 
} 
***************************************** 
Question:  Write a program to print the total count of numbers which are less than 
100000 and whose sum of digits is 14.*/
#include<stdio.h>
int main(){
    int count = 0;
    for  (int i = 1;i<100000;i++){  // runs from 1 to 100000 in increasing order
        int temp =i; // temporarily set the num
        int sum = 0; // initialise sum =0
        while(temp>0){ // while(temp >0) counts through all the digits
            sum = sum + temp%10; // adds the last digit until all the digits are added
            temp = temp/10; // decrememnts the number
        }
        if( sum ==14){ // checks if sum == 14
            count++; // increment if true
        }
    }
    printf("%d",count);

}