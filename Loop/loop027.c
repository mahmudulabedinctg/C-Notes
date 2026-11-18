// Write a C program to find the LCM of two numbers.

#include <stdio.h>
/*
int main()
{
    int n1, n2, max, lcm;

    // enter two positive integers
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;
    lcm = max;

    while ((lcm % n1 != 0) || (lcm % n2 != 0))
        lcm += max;

    printf("LCM = %d", lcm);
}
*/
// Recursive function for HCF(GCD)
int findGCD(int a, int b) // Euclidean Algorithm
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main()
{
    int n1, n2, gcd, lcm;

    // enter two integers
    scanf("%d %d", &n1, &n2);

    gcd = findGCD(n1, n2);
    lcm = (n1 * n2) / gcd;

    printf("GCD = %d", gcd);
    printf("\nLCM = %d", lcm);
}