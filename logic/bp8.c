#include <stdio.h>

// Nth Term of AP

int main() {

    int a1, a2, num;

    printf("Input a1: ");
    scanf("%d", &a1);
    printf("Input a2: ");
    scanf("%d", &a2);
    printf("Input num: ");
    scanf("%d", &num);

    int sum = a1, diff = a2 - a1;

    for (int i = 1; i < num; i++) {
        sum += diff;
    }

    printf("Output: %d", sum);

    return 0;
}