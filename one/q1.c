// Write a C Program to find out the value of for given integer values of n and
// r (user inputs) by using a user defined function for factorial.

#include <stdio.h>
int fact(int z);
void main()
{
    int n, r, nCr;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter the value of r:\n");
    scanf("%d", &r);
    nCr = fact(n) / (fact(r) * fact(n - r)); // Calculating
    printf("The value of nCr = %d\n", nCr);
}

int fact(int z) // User defined function
{
    int f = 1, i;
    if (z == 0)
    {
        return (f);
    }
    else
    {
        for (i = 1; i <= z; i++)
        {
            f = f * i;
        }
    }
    return (f);
}