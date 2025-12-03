#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Find Closest Number to n and Divisible by m

int main() {

    int num, m;

    printf("Input num: ");
    scanf("%d", &num);
    printf("Input m: ");
    scanf("%d", &m);

    int diff, prediff = INT_MAX, closest = 0;

    for (int i = num - m; i < num + m; i++) {
        if (i % m == 0) {
            diff = abs(num - i);
            if (diff < prediff || (diff == prediff && closest < i)) {
                prediff = diff;
                closest = i;
            }
        }
    }

    printf("Output: %d", closest);

    return 0;
}