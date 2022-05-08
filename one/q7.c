// Write a C Program to compute the cosine series using the following
// function representation:
// cos(x) = 1 - x 2 /2! + x 4 /4! - x 6 /6! + ……..

#include<stdio.h>
#include<math.h>
int fact(int x);
void main()
{
    double x,ax,cos_x=1, temp;
    int i,n,sign=1;

    printf("Enter the value of x in degree\n");
    scanf("%lf", &x);
    printf("Enter the value of n\n ");
    scanf("%d", &n);
  
    ax=x;
    x = x*(3.14159265/180);


    for(i=2;i<=n+1;i=i+2)
    {
        sign = -sign;
        temp = (sign*pow(x,i))/fact(i);
        cos_x = temp + cos_x;
    }

    printf("The value of Cos(%g) is  %g", ax,cos_x);

}
//Function for calculating factorial
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}