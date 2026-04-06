// Write a C program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int n, i, f = 1;

    // input a non-negative number
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Please enter a natural number");
    else
    {
        for (i = 1; i <= n; i++)
        {
            f *= i;
        }
        printf("%d! = %d", n, f);
    }
}