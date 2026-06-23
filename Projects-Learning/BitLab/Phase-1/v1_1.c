/*# PHASE 1 — Bitwise Operators

## Milestone 1.1 — AND Operator

### Problem Statement

Implement your own bitwise AND calculator.

### Example

12 & 10

1100

1010

Result:

1000

Answer:

8*/
#include<stdio.h>
int dec2bin(int n){
    for(int i = 7; i>=0;i--){
        printf("%d",(n>>i)&1);
    }
    printf("\n");
    return 0;
}
int main(){
    int n1,n2;
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);

    dec2bin(n1);
    dec2bin(n2);
    dec2bin(n1&n2);
    printf("%d",n1&n2);
}