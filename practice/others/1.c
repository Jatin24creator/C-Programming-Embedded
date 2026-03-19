// Armstrong Number of any number from the user
/*Armstrong number is any number following the given rule –

abcd… = a^n + b^n + c^n + d^n + …
Where n is the order(length/digits in number)
Also, Check Armstrong Number in a given Range in C*/

#include<Stdio.h>
int isArmstrong(int);
int main(){
    int num,result =0;
    printf("Enter the number to check the armstrong number: ");
    scanf("%d",&num);
    result = isArmstrong(num);
    // printf("%d",result);

    if(result ==0){
        printf("%d is not an armstrong number", num);
    }else{
        printf("%d is an armstrong number", num);
    }
}

int isArmstrong(int num){
    // find out the length of the number
    int temp = num, count =0;
    // calculate the length of the number
    while(temp>0){
        count++;
        temp = temp/10;
    }  
    // return count;
    // Now Calculate the sum of digit power to length of the digit
    int sum = 0; 
    temp = num;
    while(temp >0){ // till the end of the number
        int power  = 1; 
        // power of the remainder
        for( int i = 1; i <= count; i++){
            power = power *(temp%10);
        }
        sum = sum + power;
        temp =temp/10;
    }
    if(sum == num){
        return 1;
    } else{
        return 0;
    }
}