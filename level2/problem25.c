/*
******************************** 
#include<stdio.h> 
int main () 
{ 
int x; 
scanf(“%d”,&x); 
// Your Code here 
} 
***************************************** 
Question:  Write a program get number from user print the total number of single
digit prime numbers in the number. 
Answer:  
Input: 163496481   - Output: 1 
Input: 364925   - Output: 3 */

#include<stdio.h>
int main(){
    int enteredNum,count=0,status;
    printf("Enter the number: ");
    scanf("%d",&enteredNum);
    while(enteredNum>0){
        //check prime 
        for(int i =2; i<(enteredNum%10);i++){
            if((enteredNum%10)%i ==0){
                break;
            }else{
                status = 1;
            }
        }
        if (enteredNum%10 == 1 || enteredNum ==0){
            count--;
        }
        if(status == 1){
            count++;
        }
        enteredNum = enteredNum/10;
    }
    printf("%d",count);
}