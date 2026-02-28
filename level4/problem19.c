/*Question:  Write a program to print the sum of all THREE digit odd numbers 
Answer : 247500*/
#include<Stdio.h>
int main(){
    int x,y =0 ;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        if((x%1000)%2 !=0 &&(x%1000) >99 && (x%1000)<1000){
            y = y +x%1000;
        }
        x = x/10;
    }
    printf("%d",y);
}