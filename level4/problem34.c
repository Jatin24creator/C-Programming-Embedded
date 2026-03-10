/*Question:  Print the total number of all Palindrome numbers less than 100000. 
Example: 101,12321,656,99899,11511*/ 
// palindrome numbers are the numbers that are equal when reveresed the digits;
#include<stdio.h>
int main(){
    int count = 0;
    for (int i  = 1; i<=100000; i++){
        int temp = i; // set temp as the number
        int reverse = 0;
        while(temp>0){ // 58
            reverse = (temp%10+ reverse)*10; // 58=80=80+5 =850
            temp = temp/10;
        } reverse = reverse /10; // 85
        //check if i == reverse
        if(reverse == i){
            printf("%d \n",reverse);
            count++;
        }
    }
    printf("%d",count);
}