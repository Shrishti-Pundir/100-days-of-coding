//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main(){
    int a,b;
    printf("enter two numbers: \n");
    scanf ("%d %d", &a, &b);
    printf("Sum= %d, Diff=%d, Product= %d", (a+b), (a-b), (a*b));
    if (b!=0)
    printf(", Quotient= %d", (a/b));
    else 
    printf("\n Divison by Zero not possible!!!!");
}