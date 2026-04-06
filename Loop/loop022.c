// Write a C program to calculate the sum or product of digits of a number.

#include <stdio.h>
int main()
{
    int n, r, s = 0, p = 1;

    // input a number
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        s += r;
        p *= r;
        n /= 10;
    }

    printf("Sum of digits : %d", s);
    printf("\nProduct of digits : %d", p);
}