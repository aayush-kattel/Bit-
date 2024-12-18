/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 05
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate the electricity bill as per given table 
1.  0-20    unit ==> service charge=75  ==>perunit=5.0 
2.  21-30   unit ==> service charge=100 ==>perunit=6.5  
3.  31-50   unit ==> service charge=100 ==>perunit=8.0  
4.  51-100  unit ==> service charge=125 ==>perunit=9.5  
5.  101-250 unit ==> service charge=150 ==>perunit=9.5   
6.  250+    unit ==> service charge=200 ==>perunit=11.0  
*/

#include<stdio.h>

void main() {
    int u;          // Variable to store the number of units consumed
    float bill;     // Variable to store the calculated bill
    
    printf("Enter unit: ");  // Prompt user to enter the number of units
    scanf("%d", &u);  // Read the input number of units

    if (u <= 20) {
        bill = u * 5.0 + 75;  // Calculate bill for 0-20 units
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    } else if (u <= 30) {
        bill = (20 * 5.0) + 75 + (u - 20) * 6.5 + 100;  // Calculate bill for 21-30 units
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    } else if (u <= 50) {
        bill = (20 * 5.0) + 75 + (10 * 6.5) + 100 + (u - 30) * 8.0 + 100;  // Calculate bill for 31-50 units
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    } else if (u <= 100) {
        bill = (20 * 5.0) + 75 + (10 * 6.5) + 100 + (20 * 8.0) + 100 + (u - 50) * 9.5 + 125;  // Calculate bill for 51-100 units
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    } else if (u <= 250) {
        bill = (20 * 5.0) + 75 + (10 * 6.5) + 100 + (20 * 8.0) + 100 + (50 * 9.5) + 125 + (u - 100) * 9.5 + 150;  // Calculate bill for 101-250 units
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    } else {
        bill = (20 * 5.0) + 75 + (10 * 6.5) + 100 + (20 * 8.0) + 100 + (50 * 9.5) + 125 + (150 * 9.5) + 150 + (u - 250) * 11.0 + 200;  // Calculate bill for units above 250
        printf("Bill: Rs. %.2f", bill);  // Display the bill
    }
}
