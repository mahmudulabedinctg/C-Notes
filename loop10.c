// Write a C program to find the product of all natural numbers between 1 to n.

#include <stdio.h>
int main()
{
    int n, i, p = 1;

    // input n
    scanf("%d", &n);

    if (n < 1)
        printf("Error! Please enter a natural number.");
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
            p *= i;
        }
        printf("\nProduct = %d", p);
    }
}