// Write a C Program to check whether a given matrix is a symmetric matrix or
// not. [Note: In linear algebra, a symmetric matrix is a square matrix that is
// equal to its transpose.]
#include<stdio.h>
int main ()
{
int a, b, c[100][100], m, n, flag = 1;
printf ("Enter the number of rows: ");
scanf ("%d", &a);
printf ("Enter the number of columns: ");
scanf ("%d", &b);
printf ("\n");

if (a != b){

printf
("Error!! Matrix should be a square matrix which means it should have same number of rows and columns ");

}
else{
{
printf ("Enter the elements of matrix: \n");
for (m = 0; m < a; m++)
{
for (n = 0; n < b; n++)

{
printf ("Enter element [%d][%d]: ", m + 1, n + 1);
scanf ("%d", &c[m][n]);
}
}
//Printing the original matrix
printf ("The matrix that you have entered is: \n");
for (m = 0; m < a; m++)
{
for (n = 0; n < b; n++)
{
printf ("%d", c[m][n]);
printf ("\t");
}
printf ("\n");
}
//Checking if the original matirix and transpose matrix is equal
for (m = 0; m < a; m++)
{
for (n = 0; n < b; n++)
; {

if (c[m][n] != c[n][m])
{
flag++;
break;
}
}
}

//Transposing the matrices

for (m = 0; m < a; m++)
{
for (n = 0; n < b; n++)
{
c[m][n] = c[n][m];
}
}
//Printing the transpose
printf ("\nThe transpose of matrix is: \n");
for (m = 0; m < a; m++)
{
for (n = 0; n < b; n++)
{
printf ("%d ", c[m][n]);
printf ("\t");
if (n == b - 1)
{
printf ("\n");

}

}
}
}
}

if (flag == 1)
{
printf ("\nThe given square matrix is a Symmetric Matrix \n");

}
else
{
printf ("\nThe given Square matrix is not a SYmmetric Matrix\n");
}
return 0;
}