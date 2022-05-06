// Write a C Program to test whether a given integer number n is a
// palindrome number or not.
#include <stdio.h>
int palindrome(int);
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d", &n);
    palindrome(n);

    return 0;
}
// User defined function for palindrome
int palindrome(int n)
{
    int r, sum = 0, init;
    init = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (init == sum)
        printf("its a palindrome number ");
    else
        printf("its not a palindrome number");
}