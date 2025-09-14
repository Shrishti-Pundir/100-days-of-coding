//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
void main(){
    float r;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    printf("Area= %.4f, Circumference= %.4f\n", (3.14*r*r), (3.14*r*2));
}