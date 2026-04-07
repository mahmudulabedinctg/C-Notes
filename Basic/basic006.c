// Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include <stdio.h>

const float PI = 3.14159;

int main()
{
    float r, d, C, A;

    printf("--- Circle ---\n");
    printf("Radius = ");
    scanf("%g", &r);

    d = 2 * r;
    C = d * PI; // 2 * PI * r;
    A = PI * r * r;

    printf("Diameter = %g", d);
    printf("\nCircumference = %g", C);
    printf("\nArea = %g", A);
}