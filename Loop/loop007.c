// Write a C program to find the sum of the first n evan & odd natural numbers.

#include <stdio.h>
int main()
{
    int n, i, e, o, se = 0, so = 0;

    // input n
    scanf("%d", &n);

    printf("Evan : ");
    for (i = 1; i <= n; i++)
    {
        e = 2 * i;
        printf("%d ", e);
        se += e;
    }
    printf("\nSum of Evans : %d", se);

    printf("\n\nOdd : ");
    for (i = 1; i <= n; i++)
    {
        o = 2 * i - 1;
        printf("%d ", o);
        so += o;
    }
    printf("\nSum of Odds : %d", so);
}