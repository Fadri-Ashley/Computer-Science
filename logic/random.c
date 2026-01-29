#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    const char *problems[] = {
        "Check Even or Odd",
        "Multiplication Table",
        "Sum of Naturals",
        "Sum of Squares of Naturals",
        "Swap Two Numbers",
        "Closest Number",
        "Dice Problem",
        "Nth Term of AP",
        "Sum of Digits",
        "Prime Testing",
        "Check Exponent",
    };

    const size_t num_problems = sizeof(problems) / sizeof(problems[0]);

    srand(time(NULL));



    for (int i = 1; i <= 3; i++) {
        int random_index = rand() % num_problems;

        const char *random_string = problems[random_index];

        printf("Problem %d: %s\n", i, random_string);
    }

    return 0;
}