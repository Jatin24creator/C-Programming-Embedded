/*Question:  Write a program to print the sum of all single digit odd numbers 
Answer :  25 */
#include<Stdio.h>
int main() {
    int x,y = 0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if((x%10)%2 !=0){
            y = y+ x%10;
        }
        x = x/10;
    }
    printf("%d",y);
}