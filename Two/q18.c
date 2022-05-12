// The program to add two pointer
//  numbers using pointers to demnstarte the concept of pointers
#include<stdio.h>
int main(void)
{
 //Declaring local variables
 int a,b,r;
 int* pa = &a;
 int* pb = &b;
 int* pr = &r;
 //Statements
 printf("Enter the first number: ");
 scanf("%d",pa);
 printf("Enter the second number: ");
 scanf("%d",pb);
 *pr = *pa + *pb;
 printf("\n%d + %d is %d", *pa, *pb, *pr);
 return 0;
}