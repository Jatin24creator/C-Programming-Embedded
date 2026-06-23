/*## Milestone 1.4 — NOT Operator

### Problem Statement

Flip every bit.

### Learning Objectives

* Two's complement
* Bit inversion

### Hint

Use uint8_t*/

#include<stdio.h>
#include<stdint.h>
#include"bit_utils.h"
/*
| Type                | Format |
| ------------------- | ------ |
| int                 | `%d`   |
| unsigned int        | `%u`   |
| unsigned char       | `%hhu` |
| unsigned char (hex) | `%hhx` |
*/

int main(){
    uint8_t n; 
    /*
    u      -> unsigned
    int    -> integer
    8      -> 8 bits
    _t     -> type*/ 

    printf("Enter the input: ");
    scanf("%hhx",&n);
    uint8_t result = (uint8_t)(~n);
    printf("Input: ");
    dec2bin(n);
    printf("Output: ");
    dec2bin(result);
    printf("HEX: ");
    printf("0x%hhx",result);

}