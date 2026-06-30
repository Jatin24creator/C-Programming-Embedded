/*# PHASE 2 — Single Bit Operations

## Milestone 2.1 — Set Bit

### Problem Statement

Turn ON a specific bit.

### Example

Input:

8

1000

Set bit 0

Output:

1001

Answer:

9

### Learning Objectives

* Bit masks
* Enabling flags

### Hint

Use OR

### Formula

number |= (1 << position)*/
#include<stdio.h>
#include<stdint.h>
#include"../common/bit_utils.h"
uint8_t set_bit(uint8_t n, uint8_t bit){
    uint8_t mask = 1<<bit;
    uint8_t var = n|mask;
    dec2bin(var);
    printf("%hhu",var);
}
/*| Type          | scanf  |
| ------------- | ------ |
| int           | `%d`   |
| unsigned int  | `%u`   |
| char          | `%c`   |
| signed char   | `%hhd` |
| unsigned char | `%hhu` |
*/

void main(){
    uint8_t n;
    printf("Enter the number: ");
    scanf("%hhu",&n);
    printf("\nInput: ");
    dec2bin(n);
    printf("Set Bit: ");
    uint8_t bit;
    scanf("%hhu", &bit);
    set_bit(n,bit);

}