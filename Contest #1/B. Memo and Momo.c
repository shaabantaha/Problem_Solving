// Disable warning C4996: Deprecated or unsafe function usage
// We are disabling this warning to use the scanf function, which is considered deprecated,
// but we are aware of the potential risks and have taken precautions.
#pragma warning(disable: 4996)

/*****************************B. Memo and Momo *********************************/
#include <stdio.h>
//#include <limits.h>

int main(void) {
    
    long long a, b, k;
    scanf("%lld %lld %lld",&a, &b, &k);

    if ((a % k == 0) && (b % k == 0))
    {
        printf("Both");
    }
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    }
    else if (b % k == 0 && a % k != 0)
    {
        printf("Momo");
    }
    else {
        printf("No One");
    }
    return 0;
}





