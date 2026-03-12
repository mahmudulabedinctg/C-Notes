// Write a C program to calculate the average of a list of n numbers.

#include <stdio.h>
int main()
{
    int n, i;
    float num, s = 0.0, avg;

    // input how many numbers do u want?
    scanf("%d", &n);

    if (n < 1)
        printf("Error! Please enter a natural number");
    else
    {
        printf("Enter your numbers : ");
        for (i = 1; i <= n; i++)
        {
            scanf("%g", &num);
            s += num;
        }
        printf("Sum = %g", s);

        avg = s / n;
        printf("\nAvg = %g", avg);
    }
}