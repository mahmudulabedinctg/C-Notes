// Write a C program to enter a number and print it in words.

#include <stdio.h>
#include <math.h>
int main()
{
    long long n, d, i, x, p;

    // input a number
    scanf("%lld", &n);

    d = floor(log10(n)) + 1;

    printf("Number in words : ");

    for (i = 1; i <= d; i++)
    {
        p = pow(10, d - i);
        x = n / p;
        switch (x)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;

        default:
            break;
        }
        n %= p;
    }
}