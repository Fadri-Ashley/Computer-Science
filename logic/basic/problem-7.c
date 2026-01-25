#include <stdio.h>

// Dice Problem

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (0 < num && num < 7) {
        num = 7 - num;
        printf("Output number: %d", num);
    }

    return 0;
}