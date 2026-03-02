#include <stdio.h>

// Sum of Naturals

int main() {

    int num, sum; 
    printf("Input number: ");
    scanf("%d", &num);

    sum = (num * (num + 1))/2;

    printf("Output: %d", sum);

    return 0;
}