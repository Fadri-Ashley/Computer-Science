#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Find Closest Number to n and Divisible by m

int main() {

    int num, m;
    int closest, diff, prediff = INT_MAX;

    printf("Input number: ");
    scanf("%d", &num);
    printf("Input m: ");
    scanf("%d", &m);

    for (int i = num - m; i <= num + m; i++) {
        if (i % m == 0) {
            diff = abs(num - i);
            
            if (diff < prediff || (diff == prediff && i > closest)) {
                closest = i;
                prediff = diff;
            }
        }
    }

    printf("Output: %d", closest);

    return 0;
}