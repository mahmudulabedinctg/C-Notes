// Write a C program to enter two numbers in variable a & b and swap value of variables.

#include <stdio.h>
int main()
{
    int a, b, t;

    printf("A = ");
    scanf("%d", &a);

    printf("B = ");
    scanf("%d", &b);

    t = a;
    a = b;
    b = t;

    printf("A = %d", a);
    printf("\nB = %d", b);
}