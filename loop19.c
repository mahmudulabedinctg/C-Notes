// Write a C program to print the Fibonacci series up to n terms.

#include <stdio.h>
int main()
{
    int n, i, a, b, c, s;

    // input n terms
    scanf("%d", &n);

    if (n < 1)
        printf("Error! Please enter a natural number");
    else
    {
        printf("Enter first & second number of Fibonacci series : ");
        scanf("%d %d", &a, &b);
        s = a + b;

        if (n == 1)
            printf("Fibonacci Series : %d", a);
        else
        {
            printf("Fibonacci Series : %d %d ", a, b);
            for (i = 3; i <= n; i++)
            {
                c = a + b;
                s += c;
                printf("%d ", c);
                a = b;
                b = c;
            }
            printf("\nSummation = %d", s);
        }
    }
}