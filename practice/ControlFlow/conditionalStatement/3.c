/*Write a C origram to check whether a given number is positive or negative
test data: 15
expected output:
15 is a positive number*/

#include<stdio.h>
int main(){
    int num =15;
    (num>0)?printf("%d is positive",num): printf("%d is negative", num);
}