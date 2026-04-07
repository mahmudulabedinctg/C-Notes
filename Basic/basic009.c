// Write a C program to enter temperature in Fahrenheit and convert to Celsius & Kelvin.

#include <stdio.h>
int main()
{
    double f, c, k;

    printf("Fahrenheit = ");
    scanf("%lg", &f);

    c = (f - 32.0) * 5.0 / 9.0;
    k = (f - 32.0) * 5.0 / 9.0 + 273.15; // c + 273.15;

    printf("Celsius = %lg", c);
    printf("\nKelvin = %lg", k);
}