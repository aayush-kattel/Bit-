/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 06
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate Compare 2 numbers and adds if 1st no. is greater  
*or subtracts if 2nd  no. is greater (Ternary Operator) 
*/


#include<stdio.h>
void main(){
    //initialize the value of a and b;
    int a=10,b=15;

    //comparing using ternary operator and displaying output
    (a>=b) ? printf("sum: %d + %d = %d",a,b,a+b) : printf("sum: %d - %d = %d",a,b,a-b);
}