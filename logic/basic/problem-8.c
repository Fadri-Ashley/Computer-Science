#include <stdio.h>

// Nth Term of AP

int main() {

    int a1 = 1, a2 = 3, n = 10;

    int nth = a1 + (n - 1) * (a2 - a1);

    printf("Output: %d", nth);

    return 0;
}