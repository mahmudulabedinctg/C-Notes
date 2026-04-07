// Write a C program to convert days into years, weeks and days.

#include <stdio.h>
int main()
{
    int total_days, years, months, weeks, days;

    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate years and update remaining days
    years = total_days / 365;
    total_days = total_days % 365;

    // Calculate months and update remaining days
    months = total_days / 30;
    total_days = total_days % 30;

    // Calculate weeks and update remaining days
    weeks = total_days / 7;
    days = total_days % 7;

    // Display the results
    printf("\nEquivalent duration:\n");
    printf("Years  : %d\n", years);
    printf("Months : %d\n", months);
    printf("Weeks  : %d\n", weeks);
    printf("Days   : %d\n", days);
}