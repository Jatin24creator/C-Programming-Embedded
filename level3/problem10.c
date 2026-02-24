/********************************* 
#include <stdio.h> 
int count_digits(int no); 
int main() 
{ 
int number, result; 
scanf(“%d”,&number); 
result = count_digits(number); 
printf(“%d”,result); 
return 0; 
} 
int count_digits(int no) 
{ 
int result; 
// Your Program Here 
return result; 
} 
***************************************** 
Question:  Get a number from user, find the number of digits and print the same. 
Example:  
Input: 34678 Output: 5. Input: 12345678 Output: 8*/
#include<Stdio.h>
int count_digits(int no); // function prototype  avoids implicit function error
int main(){
    int number,result;
    scanf("%d",&number);
    result = count_digits(number);
    printf("%d",result);
    return 0;
}
int count_digits(int no){
    int result;
    // your code here
    while(no>0){
        result++;
        no = no/10;
    }
    return result;
}