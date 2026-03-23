/*Factorial of a number*/
#include<Stdio.h>
int main(){
    int num, factor=1;
    printf("Enter the number to calculate the factorial: ");
    scanf("%d",&num);
    int count = num;
    loop: if(count>0){
        factor = factor*count;
        count -= 1;
        goto loop;
    }
    printf("Factorial of %d is %d",num,factor);
}