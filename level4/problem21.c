/*Question:  Write a program to print the total number of TWO digit Prime numbers 
Answer : 21*/

#include<Stdio.h>
int main(){
    int x,y =0 , count =0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        //printf("%d\n",x%100);
        for (int i = 2; i<x%100; i++){
            if((x%100)%i == 0 ){ 
                y =0;
                break;
            }else{
                y = 1;
            }
        }
        x =x/10;
        if(y==1 && x%100 != 0){
        count++;
    }
    }
    
    printf("%d",count);
}