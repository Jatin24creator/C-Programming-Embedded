/*Question:  write a program to print the total number of THREE digit odd numbers 
Answer : 450 */
#include<stdio.h>
int main(){
    int x,y=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if ( (x%1000)%2 !=0 && (x%1000) <1000 && (x%1000)>99){
            y++;
        }
        x = x/10;
    }
    printf("%d",y);
}