/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 02
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate cube of sum of  2  numbers
*/
#include<stdio.h>
void main(){
   //initialize value of a and b
    int a=2,b=3;
    int sum;//initialize sum to calculate cube of sum

    //Performing sum operation
    sum=a*a*a+b*b*b;

    //Displaying output
    printf(" cube of sum of two numbers : %d*%d*%d + %d*%d*%d= %d",a,a,a,b,b,b,sum);

}