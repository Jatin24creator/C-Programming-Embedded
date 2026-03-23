/*Arrays*/
// #include<Stdio.H>
// int main(){
//     int arr[] = {25,26};
//     printf("%d", arr[0]);
// }

//Get Array Size

// #include <stdio.h>
// // int main(){
// //     int arr[] = {209,234,234};
// //     printf("%zu", sizeof(arr));
// // }

// %zu is the format specifier correct for sizeof
// %lld is a long long int that is signed 64 bit


//Get the Number of Elements

// #include<stdio.h>
// int main(){
//     int arr[] = {12,45,456,21};
//     int length = sizeof(arr) / sizeof(arr[0]); // given size of array in bytes divided by the size of one byte

//     printf("%d", length);
// }

// // Loop through an array
// #include<Stdio.h>
// int main(){
//     int arr[] = {21,124,24,321,52};
//     int i =0;
//     for(i = 0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }


//Better way to loop through the way
// #include<stdio.h>
// int main(){
//     int arr[] = {21,24,24,6532,1354,2};
//     int lengthofarr = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<=lengthofarr; i++){
//         printf("%d\n", arr[i]);
//     }
// }

// Calculate the average age in a group of people
// #include<Stdio.h>
// int main(){
//     //store the different ages of the people 
//     int ages[] = {20,24,12,15,35,35,70};
//     // average = sum/total num of people
//     int length = sizeof(ages)/sizeof(ages[0]);
//     int sum = 0; 
//     for(int i = 0; i<length; i++){
//         sum = sum + ages[i]; 
//     }
//     int averageofages = sum/length;
//     printf("%d",averageofages);
// }


// Lowest agee among the group

// #include<stdio.h>
// int main(){
//     int age[] = {12,15,243,1,124,24,2,23};
//     // calculate the length of the array
//     int length = sizeof(age)/sizeof(age[0]);
//     int lowest = age[0];
//     for(int i = 0; i<length;i++){
//         if(age[i]<lowest){
//             lowest = age[i];
//         }
//     }
//     printf("%d",lowest);
// }

// We skip negative values, but stop the loop completely if we find a zero:

#include<Stdio.h>
int main( ){
    int num[] = {12,24,-5,24,-41,55,0};
    int length = sizeof(num)/sizeof(num[0]);
    int i;
    for( i = 0;i<length;i++){
        if(num[i]==0){
            break;
        }
        else{
            continue;
        }
    }
    printf("%d",i);
}