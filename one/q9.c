// Write a C Program to find the LCM of two numbers a and b by using a
// suitable function.

#include<stdio.h>
int LCM (int num1, int num2);
void main()
{
	int num1,num2,lcm;
	int LCM (int num1, int num2);
	printf("Enter the 1st number: ");
	scanf("%d",&num1);
	printf("\n");
	printf("Enter the 2nd number: ");
	scanf("%d",&num2);
	lcm=LCM(num1,num2);//Calling LCM function
	printf("\n");
	printf("-----------------------\n");
	printf("The LCM of %d and %d is %d\n",num1,num2,lcm);
	
}
//Calculating LCM
int LCM (int num1, int num2)
{
	int lcm;
	for (lcm = 1; lcm <=(num1*num2); lcm++)
	{
		if (lcm%num1==0 && lcm%num2==0)
		{
			break;
		}
		
	}
	return lcm;
}
