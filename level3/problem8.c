/********************************* 
#include <stdio.h> 
int check_assending(int no); 
int main() 
{ 
 int number1, number2, result; 
 scanf(“%d”,&number1); 
 scanf(“%d”,&number2); 
 result = check_assending(number); 
             if(result == 1) 
           printf(”Yes”); 
             else 
                       printf(“No”);; 
 return 0; 
} 
int check_assending(int no) 
{ 
 int result; 
 // Your Program Here 
 return result; 
} 
***************************************** 
Question:  Get a number from user and check whether the digits are in 
                      ascending order. 
  
 Example:  Input: 1234 Output: Yes. Input: 5687 Output: No*/

 #include<stdio.h>
 int check_ascending(int no);
 int main(){
  int number,result;
  scanf("%d",&number);
  result = check_ascending(number);
  if(result==1){
    printf("Yes");
  }else {
    printf("No");
  }
 }
 int check_ascending(int no){
  int result;
  // your code here
  int prev_digit= 10;
  while(no>0){
    int curr_digit = no%10;
    if(curr_digit>=prev_digit){
      result =0;
      break;
    } else { 
      result =1;
    }
    prev_digit = curr_digit;
    no = no/10;
  }

  return result;
 }