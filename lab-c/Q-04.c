/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 04
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate Simple Intrest
*/

#include<stdio.h>
void main(){
    //initialize principle,time,rate and simple intrest
    int p=1000,si,t=2,r=1;

    //Calculate simple intrest
    si=(p*t*r)/100;

    //print simple intrest
    printf("Simple Intrest = RS. %d",si);
}