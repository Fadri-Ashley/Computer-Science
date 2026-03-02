#include <stdio.h>

// Swap Two Numbers

int main() {

    int a, b;

    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Output a: %d\n", a);
    printf("Output b: %d\n", b);

    return 0;
}