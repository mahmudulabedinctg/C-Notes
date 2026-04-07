// Write a C program to enter two numbers and perform all arithmetic operations.

#include <stdio.h>
int main()
{
    float n1, n2, sum, sub, mult, div;
    int mod;

    printf("Enter two numbers : ");
    scanf("%g %g", &n1, &n2);

    // perform operations
    sum = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;

    // output basic operations
    printf("Addition: %g + %g = %g\n", n1, n2, sum);
    printf("Subtraction: %g - %g = %g\n", n1, n2, sub);
    printf("Multiplication: %g * %g = %g\n", n1, n2, mult);

    // division and modulo operation
    if (n2 != 0)
    {
        div = n1 / n2;
        mod = (int)n1 % (int)n2;
        printf("Division: %g / %g = %g\n", n1, n2, div);
        printf("Reminder of integer value: %d %% %d = %d\n", (int)n1, (int)n2, mod);
    }
    else
    {
        printf("Cannot divide by zero! Cannot calculate remainder with zero!");
    }
}