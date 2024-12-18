/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 04
*Faculty: BIT
*Name: Aayush Kattel
*(Q) WAP to accept a character from user and determine whether it is a number, 
alphabet  or special character   
*/

#include <stdio.h>

void main() {
    char ch;

    // Prompting the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("%c is a number", ch);
    }
    // Check if the character is an alphabet (A-Z or a-z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet", ch);
    }
    // If it is neither a digit nor an alphabet, it's a special character
    else {
        printf("%c is a special character", ch);
    }
}