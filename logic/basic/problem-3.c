#include <stdio.h>

// Sum of Naturals

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    int sum = (num*(num + 1))/2;

    printf("%d", sum);

    return 0;
}