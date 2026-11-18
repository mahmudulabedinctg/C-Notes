// Write a C program to convert Binary to Decimal, Octal & Hexadecimal

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char b[33];
    long long d = 0;

    printf("Enter a Binary Number: ");
    scanf("%32s", b);

    int i, l = strlen(b) - 1;

    for (i = l; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            printf("Error: Invalid Binary Number");
            return 1;
        }

        d += pow(2, i) * (b[l - i] - 48);
    }

    printf("Decimal Number: %lld", d);
    printf("\nOctal Number: %llo", d);
    printf("\nHexadecimal Number: %llX", d);

    return 0;
}