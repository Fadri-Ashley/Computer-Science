#include <stdio.h>

// Arrays

int main() {

    int nums[] = {12, 45, 67, 88, 90};

    int nums2[4];

    nums2[0] = 1;
    nums2[1] = 2;
    nums2[2] = 3;
    nums2[3] = 4;
    nums2[4] = 5;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums2[i]);
    }

    printf("%zu", sizeof(nums));

    return 0;
}