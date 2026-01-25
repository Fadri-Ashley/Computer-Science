#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Closest Number

int main() {

    int n, m;

    printf("Input n: ");
    scanf("%d", &n);
    printf("Input m: ");
    scanf("%d", &m);

    int closest = 0;
    int minDiff = INT_MAX;

    for (int i = n - abs(m); i <= n + abs(m); ++i){
        if (i % m == 0) {
            int diff = abs(n - i);
            if (diff < minDiff || (diff == minDiff && abs(i) < closest)) {
                minDiff = diff;
                closest = i;
            }
        }
    }

    printf("Closest number: %d", closest);

    return 0;
}