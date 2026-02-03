#include <stdio.h>

// Dice Problem

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (0 < num && num < 7) {
        int dice = 7 - num;
        printf("Output: %d", dice);
    } else {
        printf("Invalid");
    }

    return 0;
}