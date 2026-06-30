/*Problem Statement 0.1

Create a program that accepts a decimal number and prints its binary representation.

### Example

Input:

13

Output:

1101
 // int n;
    // printf("Enter the number in the decimal: ");
    // scanf("%d",&n);

    // int binary[32];
    // int len =0;
    // if(n==0){
    //     printf("0");
    // }else{
    //     while(n>0){
       
    //     binary[len] = n%2;
    //     // printf("%d\n",binary[len]);
    //     len++;
    //     n = n/2;
    // }
    // for(int i = len-1; i>=0;i--){
    //     printf("%d", binary[i]);
    // }
    // }*/
/*odd/even
int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if((n&1) ==1){
        printf("odd");
    }else{
        printf("even");
    }
}*/
/**/
#include<stdio.h>
#include<stdint.h>

void dec2bin (int n){
    
    for(int i =7; i>=0;i--){
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}
void binAnd(int n1, int n2){
    dec2bin(n1);
    dec2bin(n2);
    int result = n1&n2;
    dec2bin(result);
    printf("%d",result);
}
void binOR(int n1,int n2){
    dec2bin(n1);
    dec2bin(n2);
    int result =n1|n2;
    printf("%d",result);
}

void binXOR(int n1, int n2){
    dec2bin(n1);
    dec2bin(n2);
    int result =n1^n2;
    printf("%d",result);
}
void binNOT(uint8_t n1){
    printf("0x%hhx\n",~n1);

}

void main(){
    uint8_t n1,n2;
    int choice;
    printf("Enter the operation:\n"
        "1 for OR\n"
        "2 for AND\n"
        "3 for XOR\n"
        "4 for NOT\n");
    scanf("%d",&choice);
   if(choice ==4){
    printf("Enter the number in HEX 0x..: ");
    scanf("%hhx",&n1);
   }else{
    printf("Enter the number 1: ");
    scanf("%d",&n1);
    printf("Enter the number 2: ");
    scanf("%d",&n2);
   }


    switch(choice){
        case 1:
        binOR(n1,n2); 
        break;
        case 2:
        binAnd(n1,n2);
        break;
        case 3: 
        binXOR(n1,n2);
        break;
        case 4:
        binNOT(n1);
        break;
        default:
        printf("Enter correct option\n");
    }  

}
    