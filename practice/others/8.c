/*Perfect number
find all divisors of that number and find their sum if the sum of divisors is equal to the number. */
#include<Stdio.h>
int main(){
    int num, sum =0;
    printf("Enter the number to find out if its a Perfect number or not: ");
    scanf("%d",&num);
    for(int i = 1;i<num;i++){
        if(num%i == 0){
            sum = sum +i;
        }
    }
    (sum == num)?printf("Perfect Number"):printf("Not a Perfect number");
}