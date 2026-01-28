#include <stdio.h>

// Reverse Digits

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    int rev = 0;

    while(num != 0) {
        int last = num % 10;

        rev *= 10;
        rev += last;

        num /= 10;
    }

    printf("Reverse: %d", rev);

    return 0;
}