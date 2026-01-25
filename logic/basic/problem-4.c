#include <stdio.h>

// Sum of Squares of Naturals

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    int sum = ((num*(num + 1) * ((2 * num) + 1)))/6;

    printf("Output: %d", sum);

    return 0;
}