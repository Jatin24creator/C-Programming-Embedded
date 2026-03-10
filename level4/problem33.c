/*Question:  Print the total number of non-decreasing numbers from 1000 to 9999.Non 
decreasing numbers have individual digits that do not have a decreasing order 
from left to right. 
(For e.g.: 1234 is a non-decreasing number where as 2134 is not)*/
// #include<stdio.h>
// int main(){
//     int count = 0; // count set to 0
//     // non decreasing number from 1000 to 9999
//     for (int i= 1000; i<=9999 ; i++){
//         int temp =i;  // temporarily assign the value to temp
//         int prevDigit = 10; // set this to 20 initially;
//         int result = 1; // true that non ascending
//         while(temp>0){
//             int currDigit = temp%10; // currDigit = remainder or the last digit , 1234 = 4
//             if(currDigit>prevDigit){ // check if 4 is greater than 10 = false, but in 2nd iteration 3 is less than 4
//                 result =0;
//                 break;
//             }
//             temp = temp/10; // reduce the number
//             prevDigit = currDigit; // set the prevDigit with currDigit
//         }
//         if (result == 1){
//             count++;
//             printf("%d\n",i);
//         }
//     }
//     printf("%d",count);

// }

// version 2
#include<stdio.h>
int main(){
    int count = 0; // initially set the count to 0
    for(int a =1; a<=9;a++){ //runs from 1 to 9
        for (int b = a; b<=9; b++){ // runs from 2 to 9 if set 1
            for(int c = b; c<=9 ; c++){ 
                for(int d = c; d<=9;d++){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}