// Write a C Program that passes three variables (a, b, c) as separate
// parameters to another user-defined function and rotates the values stored
// so that value of ‘a’ goes to ‘b’, value of ‘b’ goes to ‘c’, and value of ‘c’ to ‘a’.

#include <stdio.h>
void Swap();
int main() {
    int a, b, c;

    printf("Enter a, b and c respectively: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    Swap(&a, &b, &c);

    printf("The Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

void Swap(int *n1, int *n2, int *n3) {
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}
