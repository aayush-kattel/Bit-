/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 01
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to accept two integer and check whether they are equal or not 
*/

#include<stdio.h>

void main() {
    int a, b;

    // Prompting the user to enter two numbers
    printf("Enter any two numbers: ");
    
    // Taking two integer inputs
    scanf("%d%d", &a, &b);

    // Checking if the numbers are equal or not
    if(a == b) {
        printf("%d and %d are equal.\n", a, b);
    } else {
        printf("%d and %d are not equal.\n", a, b);
    }
}