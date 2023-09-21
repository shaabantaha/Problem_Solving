#include <stdio.h>

int main() {
    long A, B, C;
    long max, min;

    scanf("%ld %ld %ld", &A, &B, &C);

    max = min = A; // Initialize max and min with the first number (A)

    if (B > max) {
        max = B;
    }
    else if (B < min) {
        min = B;
    }

    if (C > max) {
        max = C;
    }
    else if (C < min) {
        min = C;
    }

    printf("%ld %ld", min, max);

    return 0;
}