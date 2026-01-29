#include <stdio.h>
#include <stdbool.h>

// Check Exponent

bool isExponent(int x, int y) {
    if (x <= 1) {
        return (y == 1);
    }

    while (y % x == 0) {
        y /= x;
    }

    return (y == 1);
}

int main() {

    int x, y;

    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);

    if (isExponent(x, y)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}