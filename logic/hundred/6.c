#include <stdio.h>

// Swap Two Variables

int main() {
    int a = 7;
    int b = 3;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Output: %d and %d", a, b);
}