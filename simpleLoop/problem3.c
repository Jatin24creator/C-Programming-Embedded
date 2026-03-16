/*Question:  Write a loop program to print sum of 1 to 5. 
Answer:  
15 */
#include<Stdio.h>
int main(){
    int sum = 0;
    int num = 1;
    while(num<6){
        sum = sum + num;
        num++;
    }
    printf("%d", sum);
}