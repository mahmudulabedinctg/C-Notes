// Write a C program to find the power of a number using a for loop.

#include <stdio.h>
int main()
{
    int i, pow;
    float base, res = 1.0;

    printf("Enter a base number : ");
    scanf("%g", &base);

    printf("Enter the power of this number : ");
    scanf("%d", &pow);

    if (pow < 1)
        printf("Error! Please enter a natural number");
    else
    {
        for (i = 1; i <= pow; i++)
        {
            res *= base;
        }
        // output
        printf("%g to the power %d = %g", base, pow, res);
    }
}