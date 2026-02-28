/*Question:  Write a program to print the sum of all TWO digit odd numbers 
Answer :  2475*/
#include<Stdio.h>
int main(){
    int x,y=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if((x%100)%2!=0 && (x%100)>9 && (x%100)<100){
            y = y + x%100;
        }
        x = x/10;
    }
    printf("%d",y);
}