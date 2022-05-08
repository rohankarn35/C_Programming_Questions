// Write a C Program to find out the sum of the elements stored in a matrix of
// dimension M X N (user inputs, M ≠ N).

#include<stdio.h>
int main() {
int r,c;
cplab :
printf("\nEnter the number of rows ");
scanf("%d",&r);
printf("Enter the number of columns ");
scanf("%d",&c);
if(r==c) {
printf("\nPlease enter different value for rows and columns\n");
goto cplab;
}
float a[r][c],b[r][c],e=0;
printf("\nEnter the elements of matrix 1:\n");
for (int i=0; i<r; i++) {
for (int j=0; j<c; j++) {
scanf("%f",&a[i][j]) ;
}

}
printf("Inputted Matrix 1:\n");
for (int i=0; i<r; i++) {
for(int j=0; j<c; j++) {
printf("%g ",a[i][j]);
}
printf ("\n") ;
}
for(int i=0; i<r; i++) {
for(int j=0; j<c; j++) {
e+=a[i][j];
}
}
printf("\nSum of the elements stored in a matrix : %g\n",e);
return 0;
}