// Write a C program to check whether a number is a Prime number or not.

#include <stdio.h>
int main()
{
    int n, i, f = 1;

    // input a number
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }

    if (f == 1 && n > 1)
        printf("%d is a Prime Number", n);
    else
        printf("%d isn't a Prime Number", n);
}