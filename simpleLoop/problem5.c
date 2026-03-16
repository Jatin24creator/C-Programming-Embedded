/*Question:  Write a loop program to print odd numbers 1 to 9. 
 
 Answer:  1 
   3 
   5 
   7 
   9*/

   #include<Stdio.h>
   int main(){
    int num = 1;
    while(num<10){
        if(num%2 !=0){
            printf("%d\n",num);
        }
        num++;
    }
   }