// Write a C program to find all factors of a number.

#include <stdio.h>
int main()
{
    int n, i;

    // input a number
    scanf("%d", &n);

    printf("Factors of %d are : ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}