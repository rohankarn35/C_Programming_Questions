// Write a C Program to compute the power series (e to the power x) using the
// following function representation:
// e x = 1 + x + x 2 /2! + x 3 /3! + x 4 /4! + ………..

#include<stdio.h>
#include<math.h>
int fact(int x);
void main()
{
    double x,e=1, temp;
    int i,n;

    printf("Enter the value e\n");
    scanf("%lf", &x);
    printf("Enter the value of n\n ");
    scanf("%d", &n);
  
    //ax=x;
   // x = x*(3.14159265/180);


    for(i=1;i<=n;i++)
    {
        
        temp = pow(x,i)/fact(i);
        e = temp + e;
    }

    printf("The value of Cos(%g) is  %g", x,e);

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