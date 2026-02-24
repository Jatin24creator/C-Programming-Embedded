/*
******************************** 
#include <stdio.h> 
int find_no_of_zeros(int no); 
int main() 
{ 
} 
int number,result; 
scanf(“%d”,&number); 
result = find_no_of_zeros (number); 
printf(“%d”,result); 
return 0; 
int find_no_of_zeros (int no) 
{ 
int result; 
// Your Program Here 
return result; 
} 
***************************************** 
Question:  Get a number from user and count the number of zeros in that number 
and print. Write your code inside the function. Do not Change the 
format. 
Example:  
Input: 100 Output: 2 . Input: 1060030 Output: 4.*/
#include<stdio.h>
int find_no_of_zeroes(int no);
int main(){
    int number,result;
    scanf("%d",&number);
    result = find_no_of_zeroes(number);
    printf("%d",result);
    return 0;
}

int find_no_of_zeroes(int no){
    int result;
    // Your code here
    while (no>0){
        if(no%10 == 0){
            result++;
        }
        no=no/10;
    }
    return result;
}