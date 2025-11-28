#include <stdio.h>

// Sum of Squares of Naturals

int main() {

    int num, sum;

    printf("Input number: ");
    scanf("%d", &num);

    sum = (num * (num + 1) * ((num * 2) + 1))/6;

    printf("Output: %d", sum);

    return 0;
}