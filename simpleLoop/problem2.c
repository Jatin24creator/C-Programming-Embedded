/* Write a loop program to print 5 to 1 on one by one. 
 
 Answer:  5 
   4 
   3 
   2 
   1*/
   #include<Stdio.h>
   int main(){
    int num =5;
    while(num>0){
        printf("num: %d\n",num--);
    }
   }