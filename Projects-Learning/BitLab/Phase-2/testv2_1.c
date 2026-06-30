#include<stdio.h>
#include<stdint.h>
#include "../common/bit_utils.h"
void bitSET(uint8_t n, uint8_t bit){
    uint8_t mask = (1<<bit);
    uint8_t result = n|mask;
    printf("%hhu\n",result);
    dec2bin(result);

}

int main(){
    uint8_t n, bit;
    printf("Enter the number: ");
    scanf("%hhu",&n);
    dec2bin(n);
    printf("Enter the bit to SET: ");
    scanf("%hhu",&bit);
    bitSET(n,bit);

}
