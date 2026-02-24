/********************************* 
#include <stdio.h> 
int isPrime(int no); 
int main() 
{ 
int number,result; 
scanf(“%d”,&number); 
result = isPrime(number); 
if(result == 1) 
printf(“Number is Prime”); 
else 
printf(“Number is not Prime”); 
return 0; 
} 
int isPrime(int no) 
{ 
int result; 
// Your Program Here 
return result; 
} 
***************************************** 
Question:  Get a number from user and Check Prime or Not and print the result. 
Write your code inside the function. Do not Change the format. 
Example:  
Input: 61 Output Number is Prime. Input: 1200 Output: Number is not Prime.*/

#include<stdio.h>
int isPrime(int no);
int main(){
    int number, result;
    scanf("%d",&number);
    result = isPrime(number);
    if(result ==1){
        printf("Output number is prime");
    }else{
        printf("Not Prime");
    }
    return 0;
} 
int isPrime(int no){
    int result;

    // Your code here
    for (int i = 2; i<no;i++){
        if(no%i ==0){
            result =0;
            break;
        }else{
            result =1;
        }
    }

    return result;
}