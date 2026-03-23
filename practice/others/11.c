/*Ex- Number is 21

it is divisible by its own sum (1+2) of its digit(2,1)

So it is Harshad's Number

Some other Harshad's Number are 156,54,120 etc

Harshad Number*/

#include<Stdio.h>
int main(){
    int num, sum =0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp>0){
        sum = sum + temp%10;
        temp = temp/10;
    }
    (num%sum==0)?printf("Harshad Number"):printf("Not Harshad Number");

}