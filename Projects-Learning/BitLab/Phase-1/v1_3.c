/*## Milestone 1.3 — XOR Operator

### Problem Statement

Implement XOR calculator.
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0
### Learning Objectives

* Toggle logic
* Difference detection*/

#include<stdio.h>
#include"bit_utils.h"

int main(){
    int n1,n2;
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);

    int result = (n1^n2); // XOR
    dec2bin(n1);
    dec2bin(n2);
    dec2bin(result);
    printf("%d",result);
}