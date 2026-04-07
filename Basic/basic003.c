// Write a C program to enter two numbers in variable a & b and swap value of variables only using a and b (without temporary variable)

#include <stdio.h>
int main()
{
    int a, b;

    printf("A = ");
    scanf("%d", &a);

    printf("B = ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A = %d", a);
    printf("\nB = %d", b);
}