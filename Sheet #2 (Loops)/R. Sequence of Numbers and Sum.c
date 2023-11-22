#include <stdio.h>

int main(void) {
    int n, m;
    long sum;
    char big, small;

    while (1) {
        sum = 0;
        scanf("%i %i", &n, &m);

        if (n <= 0 || m <= 0) {
            break; // Exit the loop when either n or m is 0.
        } else {
            if (n > m) {
                big = n;
                small = m;
            } else {
                big = m;
                small = n;
            }
            for (int i = small; i <= big; i++) {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%ld\n", sum);
        }
    }

    return 0;
}
