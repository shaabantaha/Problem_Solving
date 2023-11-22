#include <stdio.h>

int main() {
    int k, s;
    scanf("%d %d", &k, &s);

    int count = 0;

    // Iterate through all possible values of X, Y, and Z
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;

            // Check if the values of X, Y, and Z satisfy the conditions
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    // Output the count of valid combinations
    printf("%d\n", count);

    return 0;
}
