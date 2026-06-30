// toggle bit
#include<stdio.h>
#include"../common/bit_utils.h"
#include<stdint.h>
int main(){
    uint8_t bit,n;
    printf("Enter the number: ");
    scanf("%hhu", &n); // why only hhu?
    dec2bin(n);
    printf("Enter the bit to toggle: ");
    scanf("%hhu",&bit);

    bitTOGGLE(n,bit);
}