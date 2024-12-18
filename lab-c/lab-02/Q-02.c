/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 02
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to check whether the inputted year is leap or not 
*/

#include<stdio.h>

void main() {
    int year;
    
    // Prompt user to enter a year
    printf("Enter any year: ");
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}