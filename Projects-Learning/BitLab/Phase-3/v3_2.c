/*Multi Register Simulator;
STATUS

CONTROL

ERROR

DATA 

read STATUS

set STATUS 4

clear CONTROL 5 */

#include<stdio.h>
#include<stdint.h>
#include"../common/bit_utils_2.h"
#include<string.h>

uint8_t opRgstr(char x[10], char y[10]){
    

}

int main(){
    uint8_t bit, n;
    uint8_t STATUS = 0;
    uint8_t CONTROL = 0;
    uint8_t ERROR = 0;
    uint8_t DATA = 0;

    char command[20];
    char operation[10];
    char rgstr[10]; 

    uint8_t status = 0;
    uint8_t result =0;
     printf("MULTI REGISTER SIMULATOR!!!\n");
    while(status!=1){
        printf("STATUS bit register value is ");
        dec2bin(STATUS); 
        printf("ERROR bit register value is ");
        dec2bin(ERROR); 
        printf("CONTROL bit register value is ");
        dec2bin(CONTROL); 
        printf("DATA bit register value is ");
        dec2bin(DATA); 
        printf("------------------\n");

        printf( "Enter in the below format:\n"
                "set STATUS/CONTROL/ERROR/DATA bit\n"
                "clear STATUS/CONTROL/ERROR/DATA bit\n"
                "read STATUS/CONTROL/ERROR/DATA bit\n"
                "toggle STATUS/CONTROL/ERROR/DATA bit\n"
                "EXIT\n");
        fgets(command,sizeof(command),stdin);
        int parsed = sscanf(command, "%9s %9s %hhu",operation, rgstr,&bit);
        if (parsed ==1){
            if(strcmp(operation,"EXIT")==0){
                printf("------------------\n");
                printf("Exited Successfully!\n");
                status =1;            
            }else{
                printf("Invalid Command!\n");
                continue;
            }
        }
        else if(parsed == 2){
            printf("Invalid Command!\n");
            continue;
        }
        else if(parsed == 3){
            if(strcmp(operation,"set")==0&&strcmp(rgstr,"STATUS")==0){
                STATUS = bitSET(STATUS,bit);
                dec2bin(STATUS);
            } else if(strcmp(operation,"set")==0&&strcmp(rgstr,"CONTROL")==0){
                CONTROL = bitSET(CONTROL,bit);
                dec2bin(CONTROL);
            } else if(strcmp(operation,"set")==0&&strcmp(rgstr,"ERROR")==0){
                ERROR = bitSET(ERROR,bit);
                dec2bin(ERROR);
            } else if(strcmp(operation,"set")==0&&strcmp(rgstr,"DATA")==0){
                DATA = bitSET(DATA,bit);
                dec2bin(DATA);
            }
            else if(strcmp(operation,"clear")==0&&strcmp(rgstr,"STATUS")==0){
                STATUS = bitCLEAR(STATUS,bit);
                dec2bin(STATUS);
            } else if(strcmp(operation,"clear")==0&&strcmp(rgstr,"CONTROL")==0){
                CONTROL = bitCLEAR(CONTROL,bit);
                dec2bin(CONTROL);
            } else if(strcmp(operation,"clear")==0&&strcmp(rgstr,"ERROR")==0){
                ERROR = bitCLEAR(ERROR,bit);
                dec2bin(ERROR);
            } else if(strcmp(operation,"clear")==0&&strcmp(rgstr,"DATA")==0){
                DATA = bitCLEAR(DATA,bit);
                dec2bin(DATA);
            }

            else if(strcmp(operation,"toggle")==0&&strcmp(rgstr,"STATUS")==0){
                STATUS = bitTOGGLE(STATUS,bit);
                dec2bin(STATUS);
            } else if(strcmp(operation,"toggle")==0&&strcmp(rgstr,"CONTROL")==0){
                CONTROL = bitTOGGLE(CONTROL,bit);
                dec2bin(CONTROL);
            } else if(strcmp(operation,"toggle")==0&&strcmp(rgstr,"ERROR")==0){
                ERROR = bitTOGGLE(ERROR,bit);
                dec2bin(ERROR);
            } else if(strcmp(operation,"toggle")==0&&strcmp(rgstr,"DATA")==0){
                DATA = bitTOGGLE(DATA,bit);
                dec2bin(DATA);
            }
            
            else if(strcmp(operation,"read")==0&&strcmp(rgstr,"STATUS")==0){
                result = bitREAD(STATUS,bit);
                printf("%hhu\n",result);
            } else if(strcmp(operation,"read")==0&&strcmp(rgstr,"CONTROL")==0){
                result = bitREAD(CONTROL,bit);
                printf("%hhu\n",result);
            } else if(strcmp(operation,"read")==0&&strcmp(rgstr,"ERROR")==0){
                result = bitREAD(ERROR,bit);
                printf("%hhu\n",result);
            } else if(strcmp(operation,"read")==0&&strcmp(rgstr,"DATA")==0){
                result = bitREAD(DATA,bit);
                printf("%hhu\n",result);
            }
        }
            
    }


}