/********************************* 
#include <stdio.h> 
int reverse_number(int no); 
int main() 
{ 
} 
int number,result; 
scanf(“%d”,&number); 
result = reverse_number(number); 
printf(“%d”,result); 
return 0; 
int reverse_number(int no) 
{ 
int result; 
// Your Program Here 
return result; 
} 
***************************************** 
Question:  Get a number from user and reverse that number and print. Write your 
code inside the function. Do not Change the format. 
Example:  
Input: 123 Output: 321. Input: 56789 Output: 98765.*/
#include<stdio.h>
int reverse_number(int no);
int main(){
    int number,result;
    scanf("%d",&number);
    result = reverse_number(number);
    printf("%d",result);
    return 0;
}
int reverse_number(int no){
    int result;
    //Your code here
    while(no>0){
        result = (result + no%10)*10; // 123 = (0+3)*10, (30+2)*10,(320) 
        no = no/10;
    }
    result = result/10;
    return result;
}