// Write a C program to print the first n evan & odd natural numbers.

#include <stdio.h>
int main()
{
    int n, i;

    // input n
    scanf("%d", &n);

    printf("Evan : ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
    }

    printf("\nOdd : ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
    }
}