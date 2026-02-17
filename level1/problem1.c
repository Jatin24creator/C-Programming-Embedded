/********************************* 
#include<stdio.h> 
int main () 
{ 
int x,y; 
printf(“Enter Number : “); 
scanf(“%d”,&x); 
// Your Code Here 
printf(“Result = %d”,y); 
} 
***************************************** 
Question:  Get a number from user and add 2 to that number and print the result. 
Example:  
Input :45 Output 47. Input:56789 Output:56791 */
/*gcc        → compiler
problem1.c → source file
-o         → output flag
problem1   → executable name*/

#include <stdio.h>

int main() {
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    a = a + 2;

    printf("%d is the number after addition\n", a);

    return 0;
}
