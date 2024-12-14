/*
*Date: 2081/08/27
*C Programming Lab
*Lab-No: 07
*Faculty: BIT
*Name: Aayush Kattel
*(Q)WAP to calculate  calculate percentage of 5 subjects 
*/

#include<stdio.h>
void main(){
    //Let 'T' be the total marks of 5 indivisual subjects
    int T=500;
    //Let 'O' be the total marks obtained in 5 subject
    int O=320;

    //calculate percentage
    float p= (float) O/T*100;

    //print percentage
    printf("Percentage Obtained = %.2f%% ",p);
}