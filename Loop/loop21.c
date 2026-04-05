// Write a C program to count the number of digits in a number.

#include <stdio.h>
int main()
{
    int n, c = 0;

    // input a number
    scanf("%d", &n);

    do
    {
        n /= 10;
        c++;
    } while (n != 0);

    // // for integer 0
    // n /= 10;
    // c++;

    // while (n != 0)
    // {
    //     n /= 10;
    //     c++;
    // }

    printf("Digits : %d", c);
}