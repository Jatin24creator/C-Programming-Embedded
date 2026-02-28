/*Question:  Write a  program to print the total number of TWO digit odd numbers. 
Answer : 45 */
#include<stdio.h>
int main(){
    int x,y=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if((x%100)%2 !=0&&(x%100)<100 && (x%100)>9){
            y++;
        }
        x = x/10;
    }
    printf("%d",y);
}