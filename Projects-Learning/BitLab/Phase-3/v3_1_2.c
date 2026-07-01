// this is an improvised version that takes inputs as
// SET 1, CLEAR 2,
/*toggle 6
operation = "toggle"
bit = 6*/

#include <stdio.h>
#include <stdint.h>
#include"../common/bit_utils_2.h"
#include <string.h>
#include <ctype.h>
int main(){
    char command[20],operation[10];
    uint8_t n=0,bit,status =0;
    printf("SINGLE REGISTER SIMULATOR!!!\n");
    while(status !=1){
        printf("8 bit register value is ");
        dec2bin(n);       
        printf( "Enter in the below format:\n"
                "SET bit\n"
                "CLEAR bit\n"
                "READ bit\n"
                "TOGGLE bit\n"
                "EXIT\n");
        fgets(command,sizeof(command),stdin);
        int parsed = sscanf(command, "%9s %hhu", operation,&bit);
        for(int i = 0; operation[i]!= '\0';i++){
            operation[i] = toupper(operation[i]);
        }
        if(parsed==1){
            if(strcmp(operation,"EXIT")==0){
                printf("------------------\n");
                printf("Exited Successfully!\n");
                status = 1;
            }else{
                printf("Invalid Command!\n");
                continue;
            }
        }else if(parsed ==2){
            if(strcmp(operation,"SET")==0){
                n = bitSET(n,bit);
                dec2bin(n);
            }else if(strcmp(operation,"TOGGLE")==0){
                n = bitTOGGLE(n,bit);
                dec2bin(n);
            }else if(strcmp(operation,"READ")==0){
                uint8_t n1 = bitREAD(n,bit);
                printf("%hhu",n1);
            }else if(strcmp(operation,"CLEAR")==0){
                n = bitCLEAR(n,bit);
                dec2bin(n);
            }
            printf("\n");
        }else{
            continue;
        }

    }
}
