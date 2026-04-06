// Write a C program to find the sum of every third integer ( 2+5+8+11+... ) between 2 to n.

#include <stdio.h>
int main()
{
    int n, i, a, s = 0;

    // input n
    scanf("%d", &n);

    a = 2;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        s += a;
        a += 3;
    }
    printf("\nSum = %d", s);

    // for (i = 2; i <= (2 + (n - 1) * 3); i += 3)
    // {
    //     printf("%d ", i);
    //     s += i;
    // }
    // printf("\nSum = %d", s);
}