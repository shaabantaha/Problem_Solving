#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long A, B, C, D;

    long long X;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    X = (A * B) - (C * D);

    printf("Difference = %lld\n", X);
    return 0;
}
