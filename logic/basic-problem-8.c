#include <stdio.h>

// Nth Term of AP

int main() {

    int a, b, n;

    printf("Input a1: ");
    scanf("%d", &a);
    printf("Input a2: ");
    scanf("%d", &b);
    printf("Input n: ");
    scanf("%d", &n);

    int diff = b - a;

    int nth = a + ((n - 1) * diff);

    printf("Output: %d", nth);

    return 0;
}