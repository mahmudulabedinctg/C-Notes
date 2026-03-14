// Write a C program to find the power or inverse of a number using a for loop.

#include <stdio.h>
int main()
{
    int i, pow;
    float base, res = 1.0;

    printf("Enter a base number : ");
    scanf("%g", &base);

    printf("Enter the power of this number : ");
    scanf("%d", &pow);

    for (i = 1; i <= ((pow < 0) ? -pow : pow); i++)
    {
        res *= base;
    }

    // output
    if (pow >= 0)
        printf("%g to the power %d = %g", base, pow, res);
    else
        printf("%g to the power %d = %g", base, pow, 1 / res);
}