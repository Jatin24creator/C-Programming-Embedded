/*Perfect Square*/
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(sqrt(num) == (int)sqrt(num)){
        printf("Perfect Square");
    }else{
        printf("Not a perfect Square");
    }
}