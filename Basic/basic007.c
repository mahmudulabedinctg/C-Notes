// Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>
int main()
{
    float cm, m, km;

    printf("Centimeter = ");
    scanf("%g", &cm);

    m = cm / 100.0;
    km = m / 1000; // cm / 100000.0;

    printf("Meter = %g", m);
    printf("\nKilometer = %g", km);
}