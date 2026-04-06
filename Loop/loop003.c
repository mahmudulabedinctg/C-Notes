//  Write a C program to print all even numbers between 1 to n.
//  Write a C program to print all odd numbers between 1 to n.

#include <stdio.h>
int main()
{
    int n, i;

    // input n
    scanf("%d", &n);

    printf("Evan : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\nOdd : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}