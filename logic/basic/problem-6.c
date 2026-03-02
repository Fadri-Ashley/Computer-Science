#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Closest Number

int main() {

    int num, m;

    printf("Input number: ");
    scanf("%d", &num);
    printf("Input m: ");
    scanf("%d", &m);

    int minDiff = INT_MAX;
    int closest = 0;

    for (int i = num - abs(m); i < num + abs(m); i++) {
        if (i % m == 0) {
            int diff = abs(num - i);
            if (diff < minDiff || (diff == minDiff && abs(i) > abs(closest))) {
                minDiff = diff;
                closest = i;
            }
        }
    }

    printf("Output: %d", closest);

    return 0;
}