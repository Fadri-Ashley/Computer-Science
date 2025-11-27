#include <stdio.h>

// Sum of Naturals

int main() {

    int num, sum = 0;
    
    printf("Input number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Output: %d\n", sum);
    printf("Explanation: ");

    for (int i = 1; i <= num; i++) {
        if (i < num) {
            printf("%d + ", i);
        } else {
            printf("%d = %d", i, sum);
        }
    }

    return 0;
}