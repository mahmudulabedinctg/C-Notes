// Write a C programme to find one's complement of a Binary Number.

#include <stdio.h>
int main()
{
    char b[33], c[33];
    int i = 0;

    printf("Enter a Binary Number: ");
    scanf("%32s", b);

    while (b[i] != '\0')
    {
        if (b[i] == '0')
            c[i] = '1';
        else if (b[i] == '1')
            c[i] = '0';
        else
        {
            printf("Error: Invalid Binary Number");
            return 1;
        }
        i++;
    }
    printf("One's complement: %s", c);

    return 0;
}