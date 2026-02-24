/*
******************************** 
#include <stdio.h> 
int swap_digits(int no); 
int main() 
{ 
int number, result; 
scanf(“%d”,&number); 
result = swap_digits(number); 
printf(“%d”,result); 
return 0; 
} 
int swap_digits(int no) 
{ 
int result; 
// Your Program Here 
return result; 
} 
***************************************** 
Question:  Get a two-digit number from user swap the digits. 
Example:  
Input: 34 Output: 43. Input: 56 Output: 65  */

#include<stdio.h>
int swap_digits(int no);
int main(){
    int number,result;
    scanf("%d",&number);
    result = swap_digits(number);
    printf("%d",result);
    return 0;
}

int swap_digits(int no){
    int result;

    // your code here
    while(no>0){
        result = (result+no%10)*10; 
        no = no/10;
    }result = result/10;
    return result;
}