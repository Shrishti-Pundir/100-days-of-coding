//Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
void main(){
    int c;
    printf("Enter the temperature in Celsuis: \n");
    scanf("%d", &c);
    int f= (c*9/5)+32;
    printf("Fahrenheit= %d\n", f);
}