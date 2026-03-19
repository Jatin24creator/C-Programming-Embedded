/* Finding the armstrong numbers between the range of the series*/

#include<stdio.h>
int isArmstrong(int);
int main(){
    int firstNum, LastNum, result=0;
    printf("Enter the first number of the range: \n ");
    scanf("%d",&firstNum);
    printf("Enter the last number of the range: \n ");
    scanf("%d", &LastNum);

    // Run the loop for the range
    for(int num = firstNum; num<= LastNum; num++){
        result = isArmstrong(num);
        if(result == 1){
            printf("%d is an armstrong number\n",num);
        }
    }
}

int isArmstrong(int num){
    int temp = num,count = 0;
    // calculate the length of the number
    while(temp>0){
        count++;
        temp = temp/10;
    }
    // calculate the sum of the digits power to the length
    temp = num;
    int sum =0;
    while(temp>0){
        // calculate the power of the digit
        int power  = 1; 
        for (int i = 1; i <= count; i++){
            power = power * (temp%10);
        }
        sum = sum +power;
        temp = temp/10;
    }
    if(sum == num){
        return 1;
    } else{
        return 0;
    }
}