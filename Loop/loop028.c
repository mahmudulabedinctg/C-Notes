// Write a C program to find GCD & LCM of three numbers.
#include <stdio.h>
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int LCM(int a, int b)
{
    return a * b / GCD(a, b);
}

int main()
{
    int n1, n2, n3, gcd, lcm;
    // enter three integers
    scanf("%d %d %d", &n1, &n2, &n3);
    gcd = GCD(GCD(n1, n2), n3);
    lcm = LCM(LCM(n1, n2), n3);
    
    printf("GCD = %d", gcd);
    printf("\nLCM = %d", lcm);
}