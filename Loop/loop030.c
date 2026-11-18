// Write a C program to convert Decimal to Binary, Octal & Hexadecimal

#include <stdio.h>
/*
void converter(int num, int base)
{
    if (base == 2 || base == 8)
    {
        int i = 0, x[32];
        do
        {
            x[i] = num % base;
            num /= base;
            i++;
        } while (num > 0);

        for (i -= 1; i >= 0; i--)
            printf("%d", x[i]);
    }
    else if (base == 16)
    {
        int r, j = 0;
        char x[33];
        do
        {
            r = num % base;
            // convert 0-9 to ASCII '0'-'9' & 10-15 to ASCII 'A'-'F'
            //? the remainder value will be always between 0 to 15
            if (r < 10)
                x[j] = r + 48; // ASCII value of '0' = 48 that's why 0 + 48 = 48
            else
                x[j] = r + 55; // ASCII value of 'A' = 65 that's why 10 + 55 = 65
            num /= base;
            j++;
        } while (num > 0);

        for (j -= 1; j >= 0; j--)
            printf("%c", x[j]);
    }
}
*/
void converter(int num, int base)
{
    char x[33];
    int i = 0, r;
    do
    {
        r = num % base;
        // convert 0-9 to ASCII '0'-'9' & 10-15 to ASCII 'A'-'F'
        //? the remainder value will be always between 0 to 15
        if (r < 10)
            x[i] = r + 48; // ASCII value of '0' = 48 that's why 0 + 48 = 48
        else
            x[i] = r + 55; // ASCII value of 'A' = 65 that's why 10 + 55 = 65
        num /= base;
        i++;
    } while (num > 0);

    for (i -= 1; i >= 0; i--)
        printf("%c", x[i]);
}

int main()
{
    int num;

    printf("Enter a Decimal Number: ");
    scanf("%d", &num);

    printf("Binary Number: ");
    converter(num, 2);

    printf("\nOctal Number: ");
    converter(num, 8);

    printf("\nHexadecimal Number: ");
    converter(num, 16);

    return 0;
}