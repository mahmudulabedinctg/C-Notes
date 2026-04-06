// Write a C program to find the maximum from a list of n numbers.

#include <stdio.h>
int main()
{
    int n, i, num, max;

    // input how many numbers do u want?
    scanf("%d", &n);

    if (n < 1)
        printf("Error! Please enter a natural number");
    else
    {
        // initialize max with the first element
        printf("Enter your numbers : ");
        scanf("%d", &max);

        // compare between num and max
        for (i = 2; i <= n; i++)
        {
            scanf("%d", &num);

            max = (num > max) ? num : max;
        }
        printf("The maximum number is %d", max);
    }
}