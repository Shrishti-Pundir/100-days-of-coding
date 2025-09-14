//Write a program to swap two numbers without using a third variable.


#include <stdio.h>
void main(){
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("After swap: %d %d\n", b, a);
}