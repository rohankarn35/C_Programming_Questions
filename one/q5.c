// Write a C Program to generate all the prime numbers between 1 and n (a
// value supplied by the user). Use a user-defined function isPRIME(x) that
// can test whether the input x is prime number or not.

#include <stdio.h>
int isPrime(int n);
int main()
{
    int b, n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    if (isPrime(n) == 1)
    {
        printf(" The number %d is a prime number.\n", n);
    }
    else
    {
        printf(" The number %d is not a prime number.\n", n);
    }
    printf("---------------------------------------------\n");

    printf("Prime numbers between 1 and %d are: ", n);

    for (int i = 2; i < n; ++i)
    {

        b = isPrime(i);
        if (b == 1)
        {
            printf("%d ", i);
        }
    }
}
int isPrime(int n)
{
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            b = 0;
            break;
        }
    }
    return b;
}