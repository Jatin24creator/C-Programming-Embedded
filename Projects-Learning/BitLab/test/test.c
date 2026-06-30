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

int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i =7; i>=0;i--){
        printf("%d",(n>>i)&1);
    }
}
    