// Write a C Program to find out the sum of digits of a given integer number n
// by defining ang using a C function.

#include <stdio.h>
int sum(int n);
void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Sum of the entered digits is: %d\n", sum(n));
}
// user defined function
int sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}