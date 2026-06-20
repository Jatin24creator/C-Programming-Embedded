/*
## Milestone 0.1 — Decimal to Binary Converter

### Problem Statement

Create a program that accepts a decimal number 
and prints its binary representation.*/

#include<stdio.h>
int main(){
    int decimalNumber;
    printf("Enter the decimal number: \n");
    scanf("%d",&decimalNumber);
    int binary[32];
    // int length = sizeof(binary)/sizeof(binary[0]);
    // printf("%d\n",length);
    if(decimalNumber ==0){
        printf("0\n");
    }else{
        int index = 0;
        while(decimalNumber>0){
            int remainder = decimalNumber%2; // find out the remainder
            decimalNumber = decimalNumber/2;// quotient set to the decimalNumber
            binary[index] = remainder;
            index++;
            //printf("%d,%d\n",index,remainder);
        }

        for(int i = index-1; i>=0;i--){
            printf("%d",binary[i]);
        }
    }
    
}
    