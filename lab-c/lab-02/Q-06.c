/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 06
*Faculty: BIT
*Name: Aayush Kattel
*(Q) WAP to print first 10 even numbers using goto statement  
*/

#include <stdio.h>

void main() {
    int num = 2;  // Starting with the first even number
    int count = 1;  // Counter to track the number of even numbers printed

    // Label for the goto statement
    start:

    // Print the current even number
    printf("%d \n", num);

    // Increment the counter
    count++;

    // Move to the next even number
    num += 2;

    // If we have printed 10 even numbers, exit
    if (count <= 10) {
        goto start;  // Go back to the 'start' label
    }

    // End the program
    printf("\n");
}