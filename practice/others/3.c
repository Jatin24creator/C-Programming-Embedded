/*Fibonacci series upto nth term*/
#include<Stdio.h>
int main(){
    int num, count = 1;
    int firstNum = 0;
    int secondNum = 1;
    int sum = 0;
    printf("Enter the nth term upto which fibonacci series is needed: ");
    scanf("%d",&num);
    while(count<num){
        sum = firstNum+secondNum; //sum = 1
        printf("%d\n", firstNum); // 0 
        firstNum = secondNum; // 1
        secondNum = sum;
        count ++;

    }    
    //printf("%d\n", firstNum); // 0 
}
