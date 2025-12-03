#include <stdio.h>

// Dice Problem

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (num > 0 && 7 > num) {
        num = 7 - num;
        printf("Output: %d", num);
    } else {
        printf("Invalid!");
    }

    return 0;
}