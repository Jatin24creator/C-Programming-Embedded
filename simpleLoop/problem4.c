/*Question:  Write a loop program to print sum of 6 to 1. 
Answer:  
21*/
#include<Stdio.h>
int main(){
    int sum = 0;
    int num = 6;
    while(num>0){
        sum = sum +num;
        num--;
    }
    printf("%d", sum);
}