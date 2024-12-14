/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 03
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate Area and Circumference of circle
*/
#include<stdio.h>
#define PI 3.1415
void main(){
    //initialize the value of radius
    int r=7;
    //A=Area and C=Circumference of circle
    float A,C;

    //calculate Area
    A= PI*r*r;

    //calculate circumference
    C=2*PI*r;

    //displaying output 
    printf("area of circle= %.2f\n",A);
    printf("circumference of circle= %.2f",C);

}