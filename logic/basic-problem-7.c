#include <stdio.h>

// Dice Problem

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    if (0 < num && num < 7) {
        int opp_dice = 7 - num;
        printf("Output: %d", opp_dice);
    } else {
        printf("Invalid input");
    }

    return 0;
}