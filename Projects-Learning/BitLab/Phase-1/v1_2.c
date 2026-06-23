/*### Problem Statement

Implement a bitwise OR calculator.

### Learning Objectives

* Combining flags
* Bit enabling

### Hint

If either bit is 1 → output 1*/
#include<stdio.h>
#include"bit_utils.h"

int main(){
    int n1,n2;
    printf("Enter Number 1: ");
    scanf("%d",&n1);
    printf("Enter Number 2: ");
    scanf("%d", &n2);
    int result = (n1|n2);
    dec2bin(n1);
    dec2bin(n2);
    dec2bin(result);

    printf("%d",result);

}