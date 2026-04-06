// Write a C program to enter a number and print the reverse of that number.
// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>
int main()
{
    int n, r, reverse = 0, original;

    // input a number
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        r = n % 10;
        reverse = 10 * reverse + r;
        n /= 10;
    }
    printf("Reverse : %d", reverse);

    if (original == reverse)
        printf("\nIt's a Palindromic Number");
    else
        printf("\nIt's not a Palindromic Number");
}