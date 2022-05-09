// Write a C Program to check whether a given matrix is an orthogonal matrix
// or not. [ Note: In linear algebra, an orthogonal matrix, or orthonormal
// matrix, is a real square matrix whose product with its transpose matrix is an
// identity matrix.]

#include <stdio.h>
int
main ()
{
int M, N;
int flag = 0;
printf ("Enter the number of rows: ");
scanf ("%d", &N);
printf ("Enter the number of columns: ");
scanf ("%d", &M);
float A[M][N];
float sum = 0;
float AT[M][N];
float newMatrix[M][N];
printf ("Type the element for %dx%d matrix: \n", M, N);
printf ("\n");
for (int row = 0; row < M; row++)
{
for (int col = 0; col < N; col++)
{
printf ("Element for A[%d][%d]=", row + 1, col + 1);
scanf ("%f", &A[row][col]);
}
}
// Doing transpose of Matrix
for (int row = 0; row < N; row++)
{

for (int col = 0; col < M; col++)
{
AT[row][col] = A[col][row];
}
}
// Multiplying A*AT and storing it into a new variable
for (int row = 0; row < N; row++)
{
for (int col = 0; col < M; col++)
{
for (int i = 0; i < M; i++)
{
sum += (A[row][i] * AT[i][col]);
}

newMatrix[row][col] = sum;
sum = 0;
}
}
// Comparing the new matrix with identity matrix
for (int row = 0; row < M; row++)
{
for (int col = 0; col < N; col++)
{
if (row == col && newMatrix[row][col] == 1)
{

flag = 1;
}

if (row != col && newMatrix[row][col] == 0)

{
flag = 1;
}
}
}
//Displaying the final matrix with result
printf ("\nFinal Matrix : \n");
for (int i = 0; i < M; i++)
{
for (int j = 0; j < N; j++)
{
printf ("%.1f", newMatrix[i][j]);
printf ("\t");
}
printf ("\n");
}

if (flag == 1)
{
printf ("\nThe Given Matrix is an Orthogonal Matrix :\n");
}
else
{
printf ("\n The given Matrix is not an Orthogonal\n");
}

return 0;
}