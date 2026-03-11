/*Question:  Get 2 numbers from user and find the LCM of them. 
Example:   Input 20,30    Output:60 */

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    // LCM
    // find the greatest number
    int greatest = (num1>num2)? num1:num2; // condition? true:false
    int smallest = (num1>num2)? num2:num1; // sets the smallest number
    int condition = 1; // condition set to true
    int i = greatest;
    while(condition){ // true
        if(i%greatest == 0 && i%smallest == 0 ){
            condition =0;
            break;
        }
        i++;
    }
    if(condition ==0){
        printf("LCM is %d",i);
    }


}