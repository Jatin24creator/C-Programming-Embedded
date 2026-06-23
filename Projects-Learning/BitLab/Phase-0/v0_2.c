/*## Milestone 0.2 — Binary Visualizer

### Problem Statement

Print a fixed 8-bit representation of any number.*/
#include <stdio.h>

int main() {
int n;
printf("Enter the decimal number: ");
scanf("%d",&n);
printf("\n8 bit representation is:");
for(int i = 7; i>=0;i--){
    printf("%d",(n>>i)&1);
}
}