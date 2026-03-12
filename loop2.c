// Write a C program to print the first n odd/even natural numbers.

#include <stdio.h>
int main()
{
    int n, i;

    // input n
    scanf("%d", &n);

    printf("Evan : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nOdd : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}