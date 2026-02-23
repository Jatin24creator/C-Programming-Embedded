/*
******************************** 
#include<stdio.h> 
int main () 
{ 
int x; 
// Your Code here 
} 
***************************************** 
Question:  Write a program to print biggest 4-digit number which is divisible by 7 
and 9.*/

#include<stdio.h>
int main(){

    for (int i =10000;i>999;i--){
        if((i%7==0)&&(i%9 == 0)){
            printf("%d",i);
            break;
        }
    }
}