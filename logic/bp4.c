#include <stdio.h>

// Sum of Squares of Naturals

int main() {
    
    int num, sum = 0;

    printf("Input number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i * i;
    }

    printf("Output: %d", sum);

    return 0;
}