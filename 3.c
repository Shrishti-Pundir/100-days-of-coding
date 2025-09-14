//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
void main(){
    float l,b;
    printf("Enter length and the breadth of the rectangle: \n");
    scanf("%f %f", &l, &b);
    printf("Area= %.4f, Perimeter= %.4f\n", (l*b), 2*(l+b));
}