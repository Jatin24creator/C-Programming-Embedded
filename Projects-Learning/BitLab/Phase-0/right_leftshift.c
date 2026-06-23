#include<stdio.h>
int main(){
    int n;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    for(int i = 7; i>=0; i--){
        printf("%d\n", n);
        printf("%d\n", i);
        printf("%d\n", n>>i); // right shift to 7,6,..0
        printf("%d\n", (n>>i)&1);
        printf("\n");
    }
}