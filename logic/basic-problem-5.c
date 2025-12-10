#include <stdio.h>

// Swap Two Numbers

int main() {

    int a, b, temp;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Output a: %d\n", a);
    printf("Output a: %d", b);

    return 0;
}