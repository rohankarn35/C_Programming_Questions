// Write a C Program to calculate the value of x y for any given real number x
// and any integer number y by writing a suitable function for the same.

#include <stdio.h>
int power(int x, int y);
int main()
{
    int x, y;
    printf("Enter the value of x:\n"); // The base value
    scanf("%d", &x);
    printf("Enter the value of y:\n"); // The exponential
    scanf("%d", &y);

    printf("The value is: %d", power(x, y));
}

int power(int x, int y)
{
    int p = x;
    while (y != 1)
    {
        p = p * x;
        y--;
    }
    return p;
}