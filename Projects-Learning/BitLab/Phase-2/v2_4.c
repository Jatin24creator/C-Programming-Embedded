//Read bit
#include<stdio.h>
#include"../common/bit_utils.h"
#include<stdint.h>
int main(){
    uint8_t n,bit;
    printf("Enter the number: ");
    scanf("%hhu",&n);
    printf("Enter the bit to be read: ");
    scanf("%hhu",&bit);
    bitREAD(n,bit);
}