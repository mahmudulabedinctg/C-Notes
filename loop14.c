// Write a C program to print a multiplication table of any number.

#include <stdio.h>
int main()
{
    int n, i, range;

    // input a number
    scanf("%d", &n);

    // input multiplication range
    scanf("%d", &range);

    for (i = 1; i <= range; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}