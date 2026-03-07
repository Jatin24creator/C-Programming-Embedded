/*Question:  Print the number of zeroes you encounter between the numbers 0 to 
1000*/
#include<Stdio.h>
int main(){
    int start = 10,count =1;
    while(start<1001){
        int i = start;
        while(i>0){
            if( i%10 == 0){
                count++;
            }
            i = i/10;
        }
      
        start++;
    }
    printf("%d",count);

}