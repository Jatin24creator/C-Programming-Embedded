/*Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/
#include<stdio.h>
int main(){
    int  num = 15;
    (num%2 ==0)? printf("%d is even",num):printf("%d is odd",num);
}