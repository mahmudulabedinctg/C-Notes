// Write a C program to count the odd and even numbers from a list of n numbers.

#include <stdio.h>
int main()
{
    int n, i, ec = 0, oc = 0, num;

    // input how many numbers do u want?
    scanf("%d", &n);

    printf("Enter your numbers : ");
    for (i = 1; i <= n; i++)
    {
        // input numbers
        scanf("%d", &num);
        
        if (num % 2 == 0)
            ec++;
        else
            oc++;
    }
    printf("There are %d Evan numbers & %d Odd numbers.", ec, oc);
}