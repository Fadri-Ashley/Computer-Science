#include <stdio.h>

// Check Even or Odd

int main() {

    int num;

    printf("Input number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even number.", num) : printf("%d is odd number.", num);

    return 0;
}