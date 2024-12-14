/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 01
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate Sum, Difference, Product of 2 given numbers
*/
#include<stdio.h>
void main(){
    int a,b,s,d,p;

    //assign value of a and b
    a=2;
    b=1;

    s=a+b;  //sum
    d=a-b;  //difference
    p=a*b;  //product

    //Displaying output

    printf("sum: %d + %d =%d\n",a,b,s);
    printf("sum: %d - %d =%d\n",a,b,d);
    printf("sum: %d * %d =%d\n",a,b,p);

}