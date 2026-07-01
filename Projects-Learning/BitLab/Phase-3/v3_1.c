// Create an 8-bit register and allow users to modify it.

#include<stdio.h>
#include<stdint.h>
#include "../common/bit_utils_2.h"
uint8_t bitSELECTION(){
    uint8_t bit;
    printf("Enter the bit position: ");
    scanf("%hhu",&bit);
    return bit;
}

int main(){
    uint8_t n =0,bit,status =0;
    char choice;
    printf("THE 8 BIT REGISTER IS: ");
    dec2bin(n);
    while(status !=1){
        
        printf( "Choose:\n"
                "S for SET\n"
                "C for CLEAR\n"
                "T for TOGGLE\n"
                "R for READ\n"
                "E for EXIT\n");       
        scanf(" %c",&choice); // extra space ignores the \n
                switch(choice){
                    case 'E':
                    case 'e':
                            printf("---------------------------\n");
                            printf("Exited Successfully!\n");
                            status =1;
                            break;
                    case 'S':
                    case 's':
                            bit = bitSELECTION();
                            n = bitSET(n,bit);
                            dec2bin(n);
                            break;
                    case'C':
                    case'c':
                            bit = bitSELECTION();
                            n = bitCLEAR(n,bit);
                            dec2bin(n);
                            break;
                    case'T':
                    case't':
                            bit = bitSELECTION();
                            n = bitTOGGLE(n,bit);
                            dec2bin(n);
                            break;
                    case'R':
                    case'r':
                            bit = bitSELECTION();
                            uint8_t n1 = bitREAD(n,bit);
                            printf("%hhu\n",n1);
                            break;
                    default:
                    printf("Choose correct option");
                    
                }
    }
    
}