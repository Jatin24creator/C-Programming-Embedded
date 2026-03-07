/*Question:  Write a program to print the total number of  single digit Prime numbers 
Assume 0 & 1 are not Prime. 
Answer : 4 */
#include <stdio.h>

int main() {
    int count = 0; // sets  count as 0

    for (int i = 2; i < 10; i++) {  // Start from 2
        int isPrime = 1;           // Assume prime

        for (int j = 2; j < i; j++) { // only works for numbers less than number 
            if (i % j == 0) {      // If divisible
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
            count++;
        }
    }

    printf("Total prime numbers: %d\n", count);
    return 0;
}