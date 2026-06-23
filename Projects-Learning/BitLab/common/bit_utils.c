#include<stdio.h>

void dec2bin(int n){
    for(int i =7; i>=0;i--){
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}