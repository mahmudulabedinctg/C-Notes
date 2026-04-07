// Write a C program to enter temperature in Celsius and convert it into Fahrenheit & Kelvin.

#include <stdio.h>
int main()
{
    double c, f, k;

    printf("Celsius = ");
    scanf("%lg", &c);

    f = (9.0 * c / 5.0) + 32.0;
    k = c + 273.15;

    printf("Fahrenheit = %lg", f);
    printf("\nKelvin = %lg", k);
}