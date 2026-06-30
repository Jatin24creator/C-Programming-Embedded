#include<stdio.h>
#include<stdint.h>
#include"../common/bit_utils.h"

int main(){
    uint8_t n,bit;
    printf("Enter the number: ");
    scanf("%hhu", &n);
    dec2bin(n);
    printf("Enter the bit:  ");
    scanf("%hhu", &bit);
    bitCLEAR(n,bit);

}