/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 05
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate conversion from Celsius to Fahrenheit
*/

#include<stdio.h>
void main(){
    //initialize value of celsius
    int c=16;

    //conversion of celsius to fahrenheit
    float f = (float)c*9/5+32;

    //print fahrenheit
    printf("Fahrenheit = %.2f F",f);
}