#include <stdio.h>

// Swap Two Numbers

int main() {

    int a, b;

    printf("Input number a: ");
    scanf("%d", &a);
    printf("Input number b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b; 

    printf("Output a: %d \nOutput b: %d", a, b);


    return 0;
}