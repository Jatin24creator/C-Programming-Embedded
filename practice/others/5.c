/*abundant number:
The sum of its proper divisors is greater than the number itself
The difference between these two values is called the abundance.*/

#include<Stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter the number to find out if it's an abundant number: ");
    scanf("%d",&num);

    for (int i = num ; i >0; i--){
        if(num%i ==0){
            sum = sum+i;
        }
    }
   (sum>num)?printf("Abundant"):printf("Not Abundant"); 
}