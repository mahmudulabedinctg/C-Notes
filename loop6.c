// Write a C program to find the sum of all even & odd numbers between 1 to n.

#include <stdio.h>
int main()
{
    int n, i, se = 0, so = 0;

    // input n
    scanf("%d", &n);

    printf("Evan : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            se += i;
        }
    }
    printf("\nSum of Evans : %d", se);

    printf("\n\nOdd : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            so += i;
        }
    }
    printf("\nSum of Odds : %d", so);
}