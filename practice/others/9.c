/*Example: 6 and 28 are friendly pairs because

(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

(1 + 2 + 3)/ 6 = (1 + 2 + 4 + 7 + 14)/ 28

1 = 1

check if a friendly pair or not*/
#include<Stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    // sum of divisors of num1/num1
    int sum1 = 0,sum2 =0;
    // sum of divisor num1
    for(int i = 1; i <num1;i++){
        if(num1%i ==0){
            sum1 = sum1+i;
        }
    }

    for(int i = 1; i <num2;i++){
        if(num2%i ==0){
            sum2 = sum2+i;
        }
    }
    ((sum1/num1) == (sum2/num2))?printf("Friendly Pair"):printf("Not Friendl pair");

}