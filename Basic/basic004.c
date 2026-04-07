// Write a C program to enter length and breadth of a rectangle and find its perimeter.
// Write a C program to enter length and breadth of a rectangle and find its area.

#include <stdio.h>
int main()
{
    float a, b, P, A;

    printf("--- Rectangle ---\n");
    printf("length = ");
    scanf("%g", &a);
    printf("breadth = ");
    scanf("%g", &b);

    P = 2 * (a + b);
    A = a * b;

    printf("Perimeter = %g", P);
    printf("\nArea = %g", A);
}