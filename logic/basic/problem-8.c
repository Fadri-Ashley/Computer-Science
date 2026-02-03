#include <stdio.h>

// Nth Term of AP

int main() {

    int a1, a2, n;

    printf("Input a1: ");
    scanf("%d", &a1);
    printf("Input a2: ");
    scanf("%d", &a2);
    printf("Input n: ");
    scanf("%d", &n);

    int nth = (a1 + (n - 1) * (a2 - a1));

    printf("Output: %d", nth);

    return 0;
}