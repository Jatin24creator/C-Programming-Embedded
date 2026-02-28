/*Question:  Write a program to print the total number of  single digit Prime numbers 
Assume 0 & 1 are not Prime. 
Answer : 4 */
#include<Stdio.h>
int main (){
    int x,y =0,count=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0){
        
        for(int i = 2;i<x;i++){
            if(x%i != 0){
            
            }
        }
        if(y == 0){
            count++;
        }
        x = x/10;
    }
    printf("%d",count);
}