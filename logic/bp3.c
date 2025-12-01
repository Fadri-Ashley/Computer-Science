#include <stdio.h>

// Sum of Naturals

int main() {

    int num, sum = 0;

    printf("Input number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        sum += i;
        printf("%d + ", i);
    }
    
    printf("%d = %d", num, sum);

    return 0;
}