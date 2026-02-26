/*Question:  Write a program to print the total number of single digit odd   
numbers 
Answer - 5*/
#include<stdio.h>
int main(){
    int x,y=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if ( (x%10)%2 == 0){
            break;
        }else{
            y++;
        }
        x = x/10;
    }
    printf("%d",y);
}