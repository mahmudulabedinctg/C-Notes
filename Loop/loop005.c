// Write a C program to find the sum of all natural numbers between 1 to n.

#include <stdio.h>
int main()
{
    int n, i, s = 0;

    // input n
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        s += i;
    }
    printf("\nSum = %d", s);
}