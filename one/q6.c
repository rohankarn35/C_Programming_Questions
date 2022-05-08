// Write a C Program to compute the sine series using the following function
// representation:
// sin(x) = x - x 3 /3! + x 5 /5! - x 7 /7! + ……..

#include <stdio.h>
#include <math.h>
int fact(int n);
void main()
{
    double x, ax, sin_x = 0, temp;
    int i, n, sign = -1;

    printf("Enter the value of x in degree\n");
    scanf("%lf", &x);
    printf("Enter the value of n\n ");
    scanf("%d", &n);

    ax = x;
    x = x * (3.14159 / 180);

    for (i = 1; i <= n; i = i + 2)
    {
        sign = -sign;
        temp = (sign * pow(x, i)) / fact(i);
        sin_x = temp + sin_x;
    }

    printf("The value of Sin(%g) is  %g", ax, sin_x);
}
// Function for calculating factorial
int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}