// Write a C program to check whether a number is an Armstrong number or not.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, d, s = 0, r, original;

    // input a number
    scanf("%d", &n);
    original = n;

    d = floor(log10(n)) + 1; // for counting digits //? 10^(d-1) <= n < 10^d => log(10^(d-1)) <= log(n) < log(10^d) => (d-1) <= log(n) < d

    while (n != 0)
    {
        r = n % 10;
        s += pow(r, d);
        n /= 10;
    }

    if (original == s)
        printf("It's an Armstrong number.");
    else
        printf("It's not an Armstrong number.");
}