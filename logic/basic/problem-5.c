#include <stdio.h>

// Swap Two Numbers

int main() {

    int a, b;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Output a: %d\n", a);
    printf("Output b: %d", b);

    return 0;
}