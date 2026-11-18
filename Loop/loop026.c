// Write a C program to find the HCF (GCD) of two numbers.

#include <stdio.h>
/*
int main()
{
    int n1, n2, i, gcd;

    // enter two positive integers
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;

    printf("GCD = %d", gcd);
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
    int num1, num2, gcd;

    // enter two integers
    scanf("%d %d", &num1, &num2);
    
    gcd = findGCD(num1, num2);
    printf("GCD/GCF/HCF = %d", gcd);
}