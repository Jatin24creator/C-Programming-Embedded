// check if even or odd 
// use n&1 if 1 it's odd

#include<Stdio.h>
int main(){
    int n;
    printf("Enter the number to check if even or odd: ");
    scanf("%d",&n);
    if(n&1 ==1){ // all the numbers are stored in binary so 
    printf("odd");}
    else{
        printf("even");
    }
}