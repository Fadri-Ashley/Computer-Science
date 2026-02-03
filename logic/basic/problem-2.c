#include <stdio.h>

// Multiplication Table

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        int sum = i * num;
        printf("%d x %d = %d\n", i, num, sum);
    }

    return 0;
}