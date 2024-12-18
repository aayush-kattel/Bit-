/*
*Date: 2081/09/04
*C Programming Lab
*Lab-No: 03
*Faculty: BIT
*Name: Aayush Kattel
*(Q) WAP to take input from user and find the largest among them  
*/

#include<stdio.h>

void main() {
int a,b,c;

// Prompt the user to input three numbers
printf("Enter any 3 numbers");
scanf("%d%d%d",&a,&b,&c);

 // Checking the largest number among the three
if(a>b && a>c){
    printf("%d is largest among %d , %d and %d",a,a,b,c);
}else if(b>a && b>c){
       printf("%d is largest among %d , %d and %d",b,b,a,c);
}else{
       printf("%d is largest among %d , %d and %d",c,c,b,a);
}
}
