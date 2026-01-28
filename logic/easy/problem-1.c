#include <stdio.h>

// Sum of Digits

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    int sum = 0;

    while(num != 0) {
        int last = num % 10;

        sum += last;

        num /= 10;
    }

    printf("Sum: %d", sum);

    return 0;
}